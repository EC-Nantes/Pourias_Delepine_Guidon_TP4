/*** TYPES_PARCELLE H ***/
#pragma once

#include <iostream>
#include <vector>
#include "parcelle.h"


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
class ZA : virtual public constructible <T>
{
  protected:

  public:
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