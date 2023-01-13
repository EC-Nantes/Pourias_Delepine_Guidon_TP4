#include <stdio.h>
#include <iostream>
#include "point2d.h"
#include "polygone.h"
#include "parcelle.h"

int main(int argc, char const *argv[])
{
    std::cout << "hello world"<< std::endl;
    point2D<int> pt(6, 7);
    int num = 1;
    float surface = 0.5;
    //Polygone<int, float> pol(num, surface);
    //parcelle parc(1, "owner", pol);
    return 0;
}
