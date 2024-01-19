#include "conducteur.hpp"

Conducteur::Conducteur(const std::string nom, Voiture voiture):_nom(nom), _voiture(voiture){
    _experience=0;
};

Conducteur::Conducteur(const std::string nom, int experience, Voiture voiture): _nom(nom), _experience(experience), _voiture(voiture){};

std::string informationConducteur(Conducteur conducteur){
    return conducteur.getNom() + " (" + std::to_string(conducteur.getExperience()) + ") " + informationVoiture(conducteur.getVoiture());
};

void Conducteur::changeVoiture(Voiture voiture2){
    _voiture=voiture2;
};