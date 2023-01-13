#include <stdio.h>
#include <iostream>
#include "point2d.h"
#include "polygone.h"
#include "parcelle.h"

using namespace std;

int main(int argc, char const *argv[])
{
    cout << "hello world"<< endl;
    point2D<int> pt(6, 7);

    Polygone<int> pol;
    pol.addPoint(pt);

    parcelle<int> parc(1, "owner", pol);

    for (point2D<int> v : pol.getSommets()){
        cout << "SOMMETS : "<< v << endl;;
    }

    return 0;
}
