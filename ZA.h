#pragma once

#include <iostream>
#include <vector>
#include "constructible.h"
#include "parcelle.h"
#include "ZN.h"
using namespace std;


template<typename T>
class ZA : virtual public constructible<T>, public parcelle<T> 
{
  protected:
  string type_culture;

  public:
    ZA();
    ZA(int num, string prop, Polygone<T> forme, string type_culture);
    string getTypeCulture() {return this->type_culture;};
    void setTypeCulture(string culture);

    bool surface_peut_constuctible_mais_pas_trop(int surface_veut_construire);
};

template<typename T> void ZA<T>:: setTypeCulture(string culture){
  this->type_culture = culture;
}

template<typename T> ZA<T>::ZA() : parcelle<T>()
{
  this->type = "ZA";
}

template<typename T>
ZA<T>::ZA(int num, string prop, Polygone<T> forme, string type_culture) : parcelle<T>(num, prop,forme)
{
  this->type_culture = type_culture;
  this->type = "ZA";
}

template<typename T>
bool ZA<T>::surface_peut_constuctible_mais_pas_trop(int surface_veut_construire)
{
  int surface = this->getSurface();
  bool peut_construire = false;

  if((surface_veut_construire < 200)&&(surface_veut_construire < surface*0.1))peut_construire = true;

  return peut_construire;
}

template<typename T>
inline ostream& operator<<(ostream& s, ZA<T> z)
{
	s << "Parcelle n° : " << z.getNumero() << endl;
  s << "Type : " << z.getType() << endl;
  s << "Polygone : " << z.getForme();
  s << "Proprietaire : " << z.getProprietaire() << endl;
  s << "Surface : " << z.getSurface() << endl;
   s << "Type Culture : " << z.getTypeCulture() << endl;
	return s;
}