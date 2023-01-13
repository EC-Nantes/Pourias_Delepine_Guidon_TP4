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
  point2D(point2D const &pt2D);
  // point2D (Point2D<T> p);

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


template <typename T> inline point2D<T>::point2D() {
  this->x = 0;
  this->y = 0;
}

template <typename T> inline point2D<T>::point2D(T x, T y) {
  this->x = x;
  this->y = y;
}

template <typename T> inline point2D<T>::point2D(point2D const &pt) {
  // this = pt;
  this->x = pt.x;
  this->y = pt.y;
}

template <typename T> inline void point2D<T>::translate(T a, T b) {
  this->x += a;
  this->y += b;
}

template<typename T>
inline T point2D<T>::getX()
{
	return T(this->x);
}

template<typename T>
inline T point2D<T>::getY()
{
	return T(this->y);
}

template<typename T>
inline void point2D<T>::setX(T a)
{
	this->x = a;
}

template<typename T>
inline void point2D<T>::setY(T b)
{
	this->y = b;
}

template<typename T>
inline ostream& operator<<(ostream& s, point2D<T> pt)
{
	s << "x = " << pt2D.getX() << " y = " << pt2D.getY();
	return s;
}