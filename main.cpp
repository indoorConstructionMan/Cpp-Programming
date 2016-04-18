#include<iostream>
#include<cstdio>
#include"structure.h"

using namespace std;


int main(int argc, char** argv){
  Structure garage;
  /*width, length, height*/
  garage.setValues(2,1,5);
  garage.printDrywallArea();
  return 0;
}
