#pragma once

#include <iostream>
#include <vector>
#include "constructible.h"
#include "parcelle.h"
using namespace std;


template<typename T>
class ZAU : virtual public parcelle <T>
{
  protected:
  int pourcent_surface_constructible;

  public:
  ZAU(int num, string prop, Polygone<T> forme, int pourcent_surface_constructible);
  int  surfaceConstructible();
  int get_pourcent_surface_constructible() {return this->pourcent_surface_constructible;};
};


template<typename T>
ZAU<T>::ZAU(int num, string prop, Polygone<T> forme, int pourcent_surface) : parcelle<T>(num, prop, forme)
{
    this->pourcent_surface_constructible=pourcent_surface;
    this -> setType("ZAU");
}

template<typename T>
int ZAU<T>::surfaceConstructible(){
    return (this->getSurface*this->pourcent_surface_constructible);
}

template<typename T>
inline ostream& operator<<(ostream& s, ZAU<T> z)
{
	s << "Parcelle n° : " << z.getNumero() << endl;
  s << "Type : " << z.getType() << endl;
  s << "Polygone : " << z.getForme() << endl;
  s << "Proprietaire : " << z.getProprietaire() << endl;
  s << "Surface : " << z.getSurface() << endl;
  s << "% Constructible : " << z.get_pourcent_surface_constructible() << endl;
	return s;
}
