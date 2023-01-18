#pragma once

#include <iostream>
#include <vector>
#include "constructible.h"
#include "parcelle.h"
using namespace std;


template<typename T>
class ZAU : virtual public constructible <T>, virtual public parcelle <T>
{
  protected:

  public:
  ZAU(int num, string prop, Polygone<T> forme);
  int  surfaceConstructible();
};


template<typename T>
ZAU<T>::ZAU(int num, string prop, Polygone<T> forme){
    this -> setType("ZAU");
}

template<typename T>
int ZAU<T>::surfaceConstructible(){
    return this -> getSurface - this -> surface_construite;
}
