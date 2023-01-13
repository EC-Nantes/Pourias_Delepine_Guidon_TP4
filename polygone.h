/*** POLYGONE H ***/
#pragma once

#include <iostream>
#include <vector>
#include "point2d.h"

using namespace std;

template<typename T,typename S>

class Polygone {

    private:
        T x;

    public:
        Polygone();
        //Polygone(T num,S surface);
        Polygone(vector<point2D<T>> listeSommets);
        //Polygone(Polygone<T> poly);

        vector<point2D<T>> getSommets();

        void setSommets(vector<point2D<T>>);

        void addPoint(point2D<T>);
        void translate(T x,T y);

};

template<typename T,typename S>
Polygone<T,S>::Polygone(){

}

template<typename T,typename S>
Polygone<T,S>::Polygone(vector<point2D<T>> listeSommets){

}
/*
template<typename T>
Polygone<T>::Polygone(Polygone<T> poly){

}
*/
template<typename T,typename S>
vector<point2D<T>> Polygone<T,S>::getSommets(){

}
template<typename T,typename S>
void Polygone<T,S>::setSommets(vector<point2D<T>>){

}
template<typename T,typename S>
void Polygone<T,S>::addPoint(point2D<T>){

}
template<typename T,typename S>
void Polygone<T,S>::translate(T x,T y){

}
/* FIN DU DOCUMENT*/