#pragma once
#include "point.h"
template<typename S>
class forme
{
protected:
	vector<point<S>> vectorPt;
public:
	forme();
	forme(point<S> pt);
	vector<point<S>> getVecteurPoint();
	void setVectorPoint(vector<point<S>> vector);
	void addPoint(point<S> pt);

	virtual S perimetre() = 0;
	virtual S surface() = 0;
};

template<typename S>
inline forme<S>::forme()
{
}

template<typename S>
inline forme<S>::forme(point<S> pt)
{
	this->addPoint(pt);
}



template<typename S>
inline vector<point<S>> forme<S>::getVecteurPoint()
{
	return this->vectorPt;
}

template<typename S>
void forme<S>::setVectorPoint(vector<point<S>> vector)
{
	this->vectorPt = vector;
}

template<typename S>
inline void forme<S>::addPoint(point<S> pt)
{
	this->vectorPt.push_back(pt);
}

template<typename S>
inline ostream& operator<<(ostream& s, forme<S> f)
{
	for (int i = 0; i < f.getVecteurPoint().size(); i++)
	{
		s << "pt "<< i <<" : " << f.getVecteurPoint()[i] << "\n";
	}
	return s;
}
