#pragma once

#include <iostream>
#include <vector>
#include "constructible.h"
#include "parcelle.h"
#include "ZN.h"
using namespace std;


template<typename T>
class ZA : virtual public ZN <T>
{
  protected:
  string type_culture;

  public:
  ZA(int num, string prop, Polygone<T> forme, string type_culture);
  int get_type_culture() {return this -> type_culture;};
};


template<typename T>
ZA<T>::ZA(int num, string prop, Polygone<T> forme, string type_culture){
    this -> setType("ZA");
}