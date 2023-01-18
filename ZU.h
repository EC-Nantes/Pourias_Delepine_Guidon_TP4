#pragma once

#include <iostream>
#include <vector>
#include "constructible.h"
#include "parcelle.h"
using namespace std;


template<typename T>
class ZU : virtual public parcelle <T> //FAIRE HERITAGE CONSTRUCTIBLE !
//virtual public constructible <T>
{
  protected:
  int pourcent_surface_constructible;
  int surface_construite;

  public:
  ZU(int num, string prop, Polygone<T> forme, int pourcent_surface_constructible, int surface_construite);
  int  surfaceConstructible();
  int getSurfaceConstruite() {return this->surface_construite;};
  int get_pourcent_surface_constructible() {return this->pourcent_surface_constructible;};
};


template<typename T>
ZU<T>::ZU(int num, string prop, Polygone<T> forme, int surface_constr, int pourcent_surface) : parcelle<T>(num, prop, forme){
    this->pourcent_surface_constructible=pourcent_surface;
    this->surface_construite=surface_constr;
    this -> setType("ZU");
}


template<typename T>
int ZU<T>::surfaceConstructible(){
    int surface_totale_constructible=this->getSurface()*this->pourcent_surface_constructible/100;
    return (surface_totale_constructible - this->surface_construite);

}

template<typename T>
inline ostream& operator<<(ostream& s, ZU<T> z)
{
	s << "Parcelle n° : " << z.getNumero() << endl;
  s << "Type : " << z.getType() << endl;
  s << "Polygone : " << z.getForme() << endl;
  s << "Proprietaire : " << z.getProprietaire() << endl;
  s << "Surface construite : " << z.getSurfaceConstruite() << endl;
  s << "Surface à construire restante : " << z.surfaceConstructible()  << endl;
  s << "% Constructible :" << z.get_pourcent_surface_constructible() << endl;
	return s;
}