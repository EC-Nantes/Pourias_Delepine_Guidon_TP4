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

template<typename T>
inline ostream& operator<<(ostream& s, ZA<T> z)
{
	s << "Parcelle n° : " << z.getNumero() << endl;
  s << "Type : " << z.getType() << endl;
  s << "Polygone : " << z.getForme() << endl;
  s << "Proprietaire : " << z.getProprietaire() << endl;
  s << "Surface : " << z.getSurface() << endl;
	return s;
}