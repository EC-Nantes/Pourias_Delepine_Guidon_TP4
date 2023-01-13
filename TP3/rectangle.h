#pragma once
#include "forme.h"
template<typename R>
class rectangle : public forme<R>
{
protected :
	R hauteur;
	R largeur;
public:
	rectangle();
	rectangle(point<R> pt);
	R perimetre();
	R surface();
	R getLargeur();
	R getHauteur();

	void setLargeur(R l);
	void setHauteur(R h);
};

template<typename R>
inline rectangle<R>::rectangle()
{
}

template<typename R>
inline rectangle<R>::rectangle(point<R> pt):forme<R>(pt)
{
}

template<typename R>
inline R rectangle<R>::perimetre()
{
	return 2 * this->hauteur + 2 * this->largeur;
}

template<typename R>
inline R rectangle<R>::surface()
{
	return this->hauteur + this->largeur;
}

template<typename R>
inline R rectangle<R>::getLargeur()
{
	return this->largeur;
}

template<typename R>
inline R rectangle<R>::getHauteur()
{
	return this->hauteur;
}

template<typename R>
inline void rectangle<R>::setLargeur(R l)
{
	this->largeur = l;
}

template<typename R>
inline void rectangle<R>::setHauteur(R h)
{
	this->hauteur = h;
}

template<typename R>
inline ostream& operator<<(ostream& s, rectangle<R> r)
{
	for (int i = 0; i < r.getVecteurPoint().size(); i++)
	{
		s << "pt " << i << " : " << r.getVecteurPoint()[i] << "\n";
	}
	s << "largeur " << r.getLargeur() << "\n";
	s << "hauteur " << r.getHauteur() << "\n";
	return s;
}
