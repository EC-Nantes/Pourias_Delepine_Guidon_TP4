#include <stdio.h>
#include <iostream>
#include "point2d.h"
#include "polygone.h"
#include "constructible.h"
#include "ZU.h"
#include "ZAU.h"


using namespace std;

//int main(int argc, char const *argv[])
int main()
{
    cout << "START CODE"<< endl;

    vector<point2D<int>> v_point;

    point2D<int> pt0 (0, 0);
    point2D<int> pt1 (0, 100);
    point2D<int> pt3 (100, 0);
    point2D<int> pt2 (100, 100);
    
    
    point2D<int> pt0_fin (0, 0);

    v_point.push_back(pt0); //sens trigonometrique pour la formule de surface
    v_point.push_back(pt1);
    v_point.push_back(pt2);
    v_point.push_back(pt3);
    v_point.push_back(pt0_fin);
  
    Polygone<int> pol(v_point); 

   

    ZAU<int> parcelle_ZU1(1,"Par_A",pol, 10);

  

    cout<<parcelle_ZU1;
  


    /* FIN DU MAIN */

    return 0;
}
