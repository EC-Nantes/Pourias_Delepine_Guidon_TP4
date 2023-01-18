#pragma once

#include <iostream>
#include <vector>
#include "constructible.h"
#include "parcelle.h"
using namespace std;


template<typename T>
class ZN : virtual public constructible <T>, virtual public parcelle <T>
{
  protected:

  public:
  ZN(int num, string prop, Polygone<T> forme);
};

template<typename T>
ZN<T>::ZN(int num, string prop, Polygone<T> forme){
    this -> setType("ZN");
}