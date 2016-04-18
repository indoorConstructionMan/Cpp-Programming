#pragma once

#ifndef STRUCTURE_H
#define STRUCTURE_H


#include<iostream>
#include<cstdio>

using namespace std;

class Structure {

  private:
    int width, height, length;
    int drywallArea();
  public:
    void setValues(int, int, int);
    void printValues();
    void printDrywallArea();
};

#endif
