#include <stdio.h>
#include <iostream>
#include "point2d.h"
#include "polygone.h"
#include "parcelle.h"

int main(int argc, char const *argv[])
{
    std::cout << "hello world"<< std::endl;
    point2D<int> pt(6, 7);

    Polygone<int> pol;
    pol.addPoint(pt);

    parcelle<int> parc(1, "owner", pol);
    return 0;
}
