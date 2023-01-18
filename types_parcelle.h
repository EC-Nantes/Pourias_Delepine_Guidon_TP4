/*** TYPES_PARCELLE H ***/
#pragma once

#include <iostream>
#include <vector>
#include "constructible.h"


using namespace std;

template<typename T>
class ZU : virtual public constructible <T>
{
  protected:
  int surface_construite;

  public:
  int  surfaceConstructible;

};

template<typename T>
class ZAU : virtual public constructible <T>
{
  protected:

  public:
  int  surfaceConstructible;
};

template<typename T>
class ZN : virtual public constructible <T>
{
  protected:

  public:
};

template<typename T>
class ZA : virtual public constructible <T>, virtual public ZN <T>
{
  protected:
  string type_culture;

  public:
};

template<typename T>
inline ostream& operator<<(ostream& s, ZU<T> z)
{
	s << "Parcelle n° : " << z.getNumero() << endl;
  s << "Type : " << z.getType() << endl;
  s << "Polygone : " << z.getForme() << endl;
  s << "Proprietaire : " << z.getProprietaire() << endl;
  s << "% constructible : " << z.getEspaceConstructible() << "%"<< endl;
  s << "Surface construite : " << z.getSurfaceConstruite() << endl;
  s << "Surface à construire restante : " << z.surfaceConstructible()  << endl;
	return s;
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

template<typename T>
inline ostream& operator<<(ostream& s, ZAU<T> z)
{
	s << "Parcelle n° : " << z.getNumero() << endl;
  s << "Type : " << z.getType() << endl;
  s << "Polygone : " << z.getForme() << endl;
  s << "Proprietaire : " << z.getProprietaire() << endl;
  s << "Surface : " << z.getSurface() << endl;
  s << "Type Culture : " << z.getTypeCulture() << endl;
	return s;
}

template<typename T>
inline ostream& operator<<(ostream& s, ZN<T> z)
{
	s << "Parcelle n° : " << z.getNumero() << endl;
  s << "Type : " << z.getType() << endl;
  s << "Polygone : " << z.getForme() << endl;
  s << "Proprietaire : " << z.getProprietaire() << endl;
  s << "Surface : " << z.getSurface() << endl;

	return s;
}