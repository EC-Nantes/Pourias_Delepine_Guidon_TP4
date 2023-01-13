/*** POLYGONE H ***/
#pragma once

#include <iostream>
#include <vector>
#include "point2d.h"

using namespace std;

template<typename T>

class Polygone {

    private:
        T x;

    public:
        Polygone();
        Polygone(vector<point2D<T>> listeSommets);
        //Polygone(Polygone<T> poly);

        vector<point2D<T>> getSommets();

        void setSommets(vector<point2D<T>>);

        void addPoint(point2D<T>);
        void translate(T x,T y);

};

template<typename T>
Polygone<T>::Polygone(){

}

template<typename T>
Polygone<T>::Polygone(vector<point2D<T>> listeSommets){

}
/*
template<typename T>
Polygone<T>::Polygone(Polygone<T> poly){

}
*/
template<typename T>
vector<point2D<T>> Polygone<T>::getSommets(){

}
template<typename T>
void Polygone<T>::setSommets(vector<point2D<T>>){

}
template<typename T>
void Polygone<T>::addPoint(point2D<T>){

}
template<typename T>
void Polygone<T>::translate(T x,T y){

}
/* FIN DU DOCUMENT*/