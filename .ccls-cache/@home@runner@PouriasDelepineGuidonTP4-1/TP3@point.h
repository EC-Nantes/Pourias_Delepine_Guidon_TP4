#pragma once
#include <iostream>
#include <vector>
using namespace std;

//-----------------------------------------
// declaration de la classe
//-----------------------------------------

template<typename T>
class point
{
protected:
	T x = 0;
	T y = 0;
public :
	point();
	point(T x, T y);
	void translater(T a, T b);
	point(point const & pt);
	T getX();
	T getY();
	void setX(T a);
	void setY(T b);
};

//-----------------------------------------
// declaration des fonctions de la classe
//-----------------------------------------

template<typename T>
inline point<T>::point()
{
	this->x = 0;
	this->y = 0;
}

template<typename T>
inline point<T>::point(T x, T y)
{
	this->x = x;
	this->y = y;
}

template<typename T>
inline void point<T>::translater(T a, T b)
{
	this->x += a;
	this->y += b;
}

template<typename T>
inline point<T>::point(point const & pt)
{
	//this = pt;
	this->x = pt.x;
	this->y = pt.y;
}

template<typename T>
inline T point<T>::getX()
{
	return T(this->x);
}

template<typename T>
inline T point<T>::getY()
{
	return T(this->y);
}

template<typename T>
inline void point<T>::setX(T a)
{
	this->x = a;
}

template<typename T>
inline void point<T>::setY(T b)
{
	this->y = b;
}

template<typename T>
inline ostream& operator<<(ostream& s, point<T> pt)
{
	s << "x = " << pt.getX() << " y = " << pt.getY();
	return s;
}