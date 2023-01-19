#pragma once
#include "parcelle.h"

template <typename T>
class constructible 
{
    public:
        virtual int surfaceConstructible(parcelle<T> p);
        constructible();

};

template<typename T>
int constructible<T>::surfaceConstructible(parcelle<T> p){
    int size = 0;
    return size;
}

template<typename T>
constructible<T>::constructible(){
    
}