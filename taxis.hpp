#pragma once
#include <string>
#include <vector>

#include "conducteur.hpp"

class Taxis{
    private:
        std::string _nom;
        std::vector<Conducteur> _listeConducteur={};
    public:
        Taxis(std::string nom);
        void suppConducteur(std::string nomConducteur);
        void echangeVoiture(Conducteur c1, Conducteur c2);
        void nouvelleVoiture(Voiture v);
        std::string getNomTaxis(){return _nom;};
        std::vector<Conducteur> getListeConducteur(){return _listeConducteur;};
        void ajouterConducteur(Conducteur c){_listeConducteur.push_back(c);};
}; 

void informationTaxis(Taxis t);