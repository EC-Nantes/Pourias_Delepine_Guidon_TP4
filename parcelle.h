#pragma once
#include <string>
#include "polygone.h"
using namespace std;

class parcelle{
    protected:
        string type;
        int numero;
        string proprietaire;
        float surface;
        Polygone<int,float> forme;
        int pConstructible;

    public:
        parcelle(int num, string prop, Polygone<int,float> forme);
        //parcelle(parcelle parc);
        int getNumero();
        string getProprietaire( );
        float getSurface( );
        Polygone<int,float> getForme( );
        string getType( ); 
        void setNumero(int n);
        void setProprietaire(string prop );
        void setForme(Polygone<int,float> forme);
        void setType(string type);

};

