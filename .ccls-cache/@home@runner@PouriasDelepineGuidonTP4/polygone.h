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
        Polygone (const Polygone<T> &p);

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
        this->v_sommets = listeSommets;
}

template <typename T> 
Polygone<T>::Polygone(const Polygone &p)
    {
      this->v_sommets=p.v_sommets;
    }


template<typename T>
vector<point2D<T>> Polygone<T>::getSommets(){

    return this->v_sommets;
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

  for (int i=0;i<size(this->v_sommets);i++)
    {
      v_sommets[i].translate(x,y);
    }
}

  /*
template<typename T>
void Polygone<T>::translate(T x,T y){

    for (point2D<T> v : this->v_sommets){
        v.translate(x,y);
    }
}*/

template<typename T>
inline ostream& operator<<(ostream& s, Polygone<T> p)
{
    for (int i=0;i< p.getSommets().size();i++){
        s << "Point "<<i<< " : "<< p.getSommets()[i];
    }
	return s;
}

/* FIN DU DOCUMENT*/