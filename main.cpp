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

    vector<point2D<int>> v_point;

    point2D<int> pt(6, 7);
    point2D<int> pt1;

    cout << "point " << pt <<endl;

    v_point.push_back(pt);
    v_point.push_back(pt1);

    vector<point2D<int>>::iterator it;

    Polygone<int> pol(v_point); 

    cout << "Polygone : \n" << pol << endl;

    return 0;
}
