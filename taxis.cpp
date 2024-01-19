#include "taxis.hpp"
#include "iostream"
Taxis::Taxis(std::string nom):_nom(nom){};

void Taxis::suppConducteur(std::string nomConducteur){
    for(auto i=0; i<_listeConducteur.size(); i++){
        if(nomConducteur==_listeConducteur.at(i).getNom())
            _listeConducteur.erase(_listeConducteur.begin() + i);
    }
};

void Taxis::echangeVoiture(Conducteur c1, Conducteur c2){
    Voiture v = c1.getVoiture();
    c1.changeVoiture(c2.getVoiture());
    c2.changeVoiture(v);
};
/*
void Taxis::nouvelleVoiture(Voiture v){
    std::vector<int> listeVoitureUsee={};
    for(auto i=0; i <_listeConducteur.size(); i++){
        
    }
};
*/
void informationTaxis(Taxis t){
    std::vector<Conducteur> liste = t.getListeConducteur();
    std::cout<<"Nom :"<<t.getNomTaxis()<<std::endl;
    std::cout<<"Liste conducteur :"<<std::endl;
    for (auto i=0; i<liste.size(); i++)
    {
        std::cout<<informationConducteur(liste.at(i))<<std::endl;
    }
}