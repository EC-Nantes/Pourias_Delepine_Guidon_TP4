#include <stdio.h>
#include <iostream>
#include "point2d.h"
#include "polygone.h"
#include "parcelle.h"


using namespace std;

//int main(int argc, char const *argv[])
int main()
{
    cout << "START CODE"<< endl;

    vector<point2D<int>> v_point;

    point2D<int> pt0 (1, 1);
    point2D<int> pt1 (1, 3);
    point2D<int> pt2 (3, 1);
    point2D<int> pt3 (3, 3);

    v_point.push_back(pt0); //sens trigonometrique pour la formule de surface
    v_point.push_back(pt2);
    v_point.push_back(pt3);
    v_point.push_back(pt1);
    

   
    
    Polygone<int> pol(v_point); 

    cout << "Polygone : \n" << pol << endl;

    parcelle<int> parcelle_1(1,"Par_A",pol);

    cout << "Parcelle numero : " << parcelle_1.getNumero() << endl;
    cout << "Parcelle forme : \n" << parcelle_1.getForme() << endl;
    cout << "Parcelle proprietaire : " << parcelle_1.getProprietaire() << endl;
    cout << "Parcelle surface : " << parcelle_1.getSurface() << " m^2"<<endl;
    cout << "Parcelle Type : " << parcelle_1.getType() << endl;

    return 0;
}
