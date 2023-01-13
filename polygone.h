/*** POLYGONE H ***/
#pragma once

#include <iostream>
#include <vector>
#include "point2d.h"

using namespace std;

template<typename T>

class Polygone {

    private:
        vector<point2D<T>> v_sommets;

    public:
        Polygone();
        Polygone(vector<point2D<T>> listeSommets);
        //Polygone(Polygone<T,S> poly);

        vector<point2D<T>> getSommets();

        void setSommets(vector<point2D<T>> listeSommets);

        void addPoint(point2D<T> pt);
        void translate(T x,T y);

};

template<typename T>
Polygone<T>::Polygone(){

    point2D<int> pt_init;
    this->v_sommets.push_back(pt_init);
}

template<typename T>
Polygone<T>::Polygone(vector<point2D<T>> listeSommets){
    for (T v : listeSommets){
        this->v_sommets = v;
    }
}
/*
template<typename T,typename S>
Polygone<T,S>::Polygone(Polygone<T,S> poly){

}
*/
template<typename T>
vector<point2D<T>> Polygone<T>::getSommets(){
    vector<point2D<T>> get_sommets;

    for (T v : this->v_sommets){
        get_sommets = v;
    }
    return get_sommets;
}

template<typename T>
void Polygone<T>::setSommets(vector<point2D<T>> listeSommets){
    this->v_sommets = listeSommets;
}

template<typename T>
void Polygone<T>::addPoint(point2D<T> pt){
    this->v_sommets.push_back(pt);

}

template<typename T>
void Polygone<T>::translate(T x,T y){

    for (T v : this->v_sommets){
        v.translate(x,y);
    }
}
/* FIN DU DOCUMENT*/