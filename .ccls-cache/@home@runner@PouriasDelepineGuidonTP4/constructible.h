#pragma once
#include "parcelle.h"

template <typename T>
class constructible 
{
    public:
        virtual int surfaceConstructible();
};

template<typename T>
int constructible<T>::surfaceConstructible() {
  return 0;
}


