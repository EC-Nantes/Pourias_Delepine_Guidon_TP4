#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "parcelle.h"
#include "utilitaire.h"
#include "ZN.h"
#include "ZA.h"
#include "ZAU.h"
#include "ZU.h"
using namespace std;


//prototypes de fonction :
string cutStr(int a, int b, string stToCut);
int findFirstNumber(string texte);
point2D<int> findPoint(string texte);


template<typename T>
class Carte{
    private:
        string cheminCarte = "Parcelles.txt";
        vector<parcelle<T>> vectorParcelle;
    public:
        Carte();
        Carte(string cheminCarte);
        vector<parcelle<T>> loadCarte(string carteToLoad);
        void addParcelle(parcelle<T> parc);
        void save();
        void afficher();
};

template<typename T> Carte<T>::Carte(){}

template<typename T> Carte<T>::Carte(string cheminCarte){
    vector<parcelle<T>> parcToAdd = loadCarte(cheminCarte);
    for(int i = 0; i < parcToAdd.size(); i++){
        this->vectorParcelle.push_back(parcToAdd[i]);
    }
}

template<typename T> vector<parcelle<T>> Carte<T>::loadCarte(string carteToLoad){
    vector<parcelle<T>> parcToAdd;
    string listeParcelle;
    //listeParcelle = "ZA 24 SAMSON Blé \n[-47;-158] [-72;-239] [0;-275] [25;-208] \nZA 101 ROUGE Tabac \n[0;125] [-38;146] [-60;115] [0;50]";
    readFileIntoString(carteToLoad, listeParcelle);
    //cout << "Carte : " << endl << listeParcelle << endl;

    vector<string> vecteurData;

    int i = 0;
    while(i < listeParcelle.length()-1){
        // Caractere brut
        //cout << "Index : " << i << " -> ";
        if(listeParcelle[i] == '\n'){
            i++;
        }

        // TYPE DE PARCELLE
        int j = i;
        while(listeParcelle[j]!=' ')
        {
            j++;
        }
        if(j>listeParcelle.length()){
            j = listeParcelle.length();
        }
        string token = cutStr(i, j, listeParcelle);
        if(token != "\n"){
            vecteurData.push_back(token);
        }
        i=j;
        //cout << " type : " << token;
        i++;

        if(listeParcelle[i] == '\n'){
            i++;
        }

        if(listeParcelle[i] == '\r'){
            i++;
        }

    }
    
    for(int i = 0; i < vecteurData.size(); i++){
        cout << vecteurData[i] << endl;
    }
    
    i = 0;
    while(i < vecteurData.size()){
        cout << "type : " << vecteurData[i] << endl;
        string type = vecteurData[i];
        i++;

        cout << "surface : " << vecteurData[i] << endl; // a convertir en int ? peut etre laisser en string
        string surface = vecteurData[i];
        i++;

        cout << "nom : " << vecteurData[i] << endl;
        string nom = vecteurData[i];
        i++;

        cout << "culture : " << vecteurData[i] << endl;
        string culture = vecteurData[i];
        i++;


        bool run = true;
        vector<point2D<int>> v_point;
        while(run){
            if(i < vecteurData.size()){
                if(vecteurData[i][0] == '['){
                    // CREATION DES POINTS
                    // todo
                    
                    point2D<int> pt = findPoint(vecteurData[i]);
                    
                    v_point.push_back(pt); 
                    
                    cout << "point : " << vecteurData[i] << endl;
                    i++;
                }else{
                    run = false;
                }
            }else{
                run = false;
            }
            
            
        }
        // CREATION DU POLYGONE A PARTIR DU VECTEUR AVEC LES POINTS
        Polygone<int> pol(v_point); 

        // CREATION DES PARCELLES
        //numero de parcelle a ajouter et adapter au création spécifique des classes filles
        //TODO
        //convert surface en int
        if(type == "ZA"){
            //ZA<int> parcZA(findFirstNumber(surface), nom, pol, culture);
            //parcToAdd.push_back(parcZA);
        }else if(type == "ZAU"){
            //ZAU<int> parcZAU(findFirstNumber(surface), nom, pol, culture);
            //parcToAdd.push_back(parcZAU);
        }else if(type == "ZU"){
            //ZU<int> parcZU(findFirstNumber(surface), nom, pol, culture);
            //parcToAdd.push_back(parcZU);
        }else if(type == "ZN"){
            //ZN<int> parcZN(findFirstNumber(surface), nom, pol, culture);
            //parcToAdd.push_back(parcZN);
        }

    }
    return parcToAdd;
}

template<typename T> void Carte<T>::addParcelle(parcelle<T> parc){
    this->vectorParcelle.push_back(parc);
}

template<typename T> void Carte<T>::save(){
    // dans fichier texte
    // ne pas oublier le caractere espace qui est utilisé dans la segmentation
    string str = "";
    for(int i = 0; i < this->vectorParcelle.size(); i++){
        //str << this->vectorParcelle[i] << endl;
    }
}

template<typename T> void Carte<T>::afficher(){
    for(int i = 0; i < this->vectorParcelle.size(); i++){
        cout << this->vectorParcelle[i] << endl;
    }
}

string cutStr(int a, int b, string stToCut){
    string newStr = "";
    for(int i = a; i < b; i++){
        newStr += stToCut[i];
    }
    return newStr;
}

int findFirstNumber(string texte){
    int number = 0;
    int i = 0;

    while (not('0' <= texte[i] && texte[i] <= '9')){
        i++;
    }

    while (i < texte.length())
    {
        if(('0' <= texte[i] && texte[i] <= '9')){
            number = number * 10 + texte[i]-54;
        }
        i++;
    }

    return number;
}

point2D<int> findPoint(string texte){
    // x et y a identifier dans la string
    int x = 70;
    int y = 98;
    point2D<int> pt(x, y);
    return pt;
}