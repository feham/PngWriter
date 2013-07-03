#include <iostream>
#include "PngWriter.hpp"

// to build:
//
// g++ main.cpp -lpng 

int main(int argc,char * argv[]) {
  
  PngWriter png(800,600);

  // set some pixels....

  for (int i = 0; i < 800; ++i)
    for (int j = 0; j < 600; ++j)
      png.set(i,j,i+j,i-j,j-i); // set function assumes (0,0) is bottom left 
  
  // then write...
  
  png.write("sample.png");

  // you can make some changes and write another...

  png.set(400,300,0,0,0);
  
  png.write("sample2.png");
  
}

