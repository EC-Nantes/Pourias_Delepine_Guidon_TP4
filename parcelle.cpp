#include "parcelle.h"

parcelle::parcelle(int num, string prop, Polygone<int,float> forme){

}
/*parcelle::parcelle(parcelle parc){

}*/

int parcelle::getNumero(){
    return this->numero;
}

string parcelle::getProprietaire( ){
    return this->proprietaire;
}

float parcelle::getSurface( ){
    return this->surface;
}

Polygone<int,float> parcelle::getForme( ){
    return this->forme;
}
string parcelle::getType( ){
    return this->type;
}
void parcelle::setNumero(int n){

}
void parcelle::setProprietaire(string prop ){

}
void parcelle::setForme(Polygone<int,float> forme){

}
void parcelle::setType(string type){
    
}