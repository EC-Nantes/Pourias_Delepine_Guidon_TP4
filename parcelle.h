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
        Parcelle(int num, string prop, Polygone<int,float> forme);
        Parcelle(Parcelle parc);
        int getNumero();
        string getPropriétaire( );
        float getSurface( );
        Polygone<int,float> getForme( );
        string getType( ); 
        void setNumero(int n);
        void setPropriétaire(string prop );
        void setForme(Polygone<int,float> forme);
        void setType(string type);

};
