/*** POLYGONE H ***/
#pragma once

#include <iostream>
#include <vector>
//#include "point2d.h"

using namespace std;

template<typename T>

class Polygone {

    private:
        T x;

    public:
        Polygone();
        //Polygone(vector<point2D<T>> listeSommets);

        //Polygone(Polygone<T> poly);

        //vector<point2D<T>> getSommets();

        //void setSommets(vector<point2D<T>>);

};

template<typename T>

Polygone<T>::Polygone(){
    this->x;
}