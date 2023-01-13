// CPP_TP3.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage
#include <iostream>
#include "point.h"
#include "forme.h"
#include "rectangle.h"

int main()
{
    point<int> pt1(12, 13);
    point<int> pt2(pt1);
    std::cout << "pt1 : " << pt1 << "\n";
    std::cout << "pt2 : " << pt2 << "\n";
    pt1.translater(10, 5);
    std::cout << "pt1 : " << pt1 << "\n";
    std::cout << "pt2 : " << pt2 << "\n";

    //forme<int> f1(pt1);
    //f1.addPoint(pt2);
    //std::cout << "f1 : " << f1 << "\n";

    rectangle<int> r1(pt1);
    r1.addPoint(pt2);
    r1.setHauteur(10);
    r1.setLargeur(-2);
    std::cout << "r1 : " << r1 << "\n";

}
