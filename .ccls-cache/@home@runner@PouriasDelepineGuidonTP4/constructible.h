#pragma once
#include "parcelle.h"

template <typename T>
class constructible 
{
    public:
        virtual int surfaceConstructible(parcelle<T> p);
};

template<typename T>
int constructible<T>::surfaceConstructible(parcelle<T> p) {
  return 0;
}


