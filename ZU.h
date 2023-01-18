#pragma once

#include <iostream>
#include <vector>
#include "constructible.h"
#include "parcelle.h"
using namespace std;


template<typename T>
class ZU : virtual public constructible <T>, virtual public parcelle <T>
{
  protected:
  int surface_construite;

  public:
  ZU(int num, string prop, Polygone<T> forme, int surface_construite);
  int  surfaceConstructible();
  int get_surface_construite() {return surface_construite;};

};


template<typename T>
ZU<T>::ZU(int num, string prop, Polygone<T> forme, int surface_construite){
    this -> setType("ZU");
}


template<typename T>
int ZU<T>::surfaceConstructible(){
    return this -> getSurface - this -> surface_construite;
}