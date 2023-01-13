#include <stdio.h>
#include <iostream>
#include "point2d.h"
#include "polygone.h"
#include "parcelle.h"


using namespace std;

//int main(int argc, char const *argv[])
int main()
{
    cout << "hello world"<< endl;

   


    point2D<int> pt(6, 7);
    point2D<int> pt1;

    vector<point2D<int>> v_point;

    cout << "point " << pt <<endl;

    v_point.push_back(pt1);
    //v_point.push_back(pt1);

    //Polygone<int> pol(v_point); //remplacer int par des points

    //pol.addPoint(pt);

    //cout << "Polygone" << pol <<endl;



    //parcelle<int> parc(1, "owner", pol);
/*
    for (point2D<int> v : pol.getSommets()){
        cout << "Polygone : "<< pol << endl;;
    }
*/
    return 0;
}
