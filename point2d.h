#pragma once
#include <iostream>
#include <vector>
using namespace std;

//-----------------------------------------
// declaration de la classe
//-----------------------------------------

template <typename T> class point2D {

protected:
  T x = 0;
  T y = 0;

public:
  // constructeurs
  point2D();
  point2D(T x, T y);
  //point2D (point2D<T> &p);
  

  // accesseurs en lecture
  T getX();
  T getY();

  // accesseurs en écriture
  void setX(T a);
  void setY(T b);

  void translate(T a, T b);
};


//-----------------------------------------
// declaration des fonctions de la classe
//------


template <typename T> 
point2D<T>::point2D() {
  this->x = 0;
  this->y = 0;
}

template <typename T> 
point2D<T>::point2D(T x, T y) {
  this->x = x;
  this->y = y;
}
/*
template <typename T> 
point2D<T>::point2D (point2D<T> &p)
{
  this->x = p.x;
  this->y = p.y;
}
*/
template <typename T> 
void point2D<T>::translate(T a, T b) {
  this->x += a;
  this->y += b;
}

template<typename T>
T point2D<T>::getX()
{
	return T(this->x);
}

template<typename T>
T point2D<T>::getY()
{
	return T(this->y);
}

template<typename T>
void point2D<T>::setX(T a)
{
	this->x = a;
}

template<typename T>
void point2D<T>::setY(T b)
{
	this->y = b;
}

template<typename T>
ostream& operator<<(ostream& s, point2D<T> p)
{
	s << "x = " << p.getX() << " y = " << p.getY() << "\n";
	return s;
}