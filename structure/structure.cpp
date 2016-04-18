#include<iostream>
#include<cstdio>
#include"structure.h"

using namespace std;

void Structure::setValues(int l, int w, int h){
  width = w;
  height = h;
  length = l;
}

void Structure::printValues(){
  cout << "Width == ";
  cout << width;
  cout << "\tHeight == ";
  cout << height;
  cout << "\tLength == ";
  cout << length << endl;
}

int Structure::drywallArea(){
  return length * width + 2 * length * height + 2 * width * height;
}

void Structure::printDrywallArea(){
  cout << drywallArea() << endl;
}
