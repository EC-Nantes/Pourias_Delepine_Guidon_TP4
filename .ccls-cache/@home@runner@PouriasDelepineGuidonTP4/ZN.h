#pragma once

#include <iostream>
#include <vector>
#include "constructible.h"
#include "parcelle.h"
using namespace std;


template<typename T>
class ZN : virtual public constructible<T>, virtual public parcelle<T>
{
  protected:

  public:
  ZN(int num, string prop, Polygone<T> forme);
};

template<typename T>
ZN<T>::ZN(int num, string prop, Polygone<T> forme): parcelle<T>(num, prop,forme){
  this->setType("ZN");
  this->setProprietaire(prop);
  this->setForme(forme);
}

template<typename T>
inline ostream& operator<<(ostream& s, ZN<T> z)
{
	s << "Parcelle n° : " << z.getNumero() << endl;
  s << "Type : " << z.getType() << endl;
  s << "Polygone : " << z.getForme();
  s << "Proprietaire : " << z.getProprietaire() << endl;
  s << "Surface : " << z.getSurface() << endl;

	return s;
}