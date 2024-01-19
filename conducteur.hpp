#pragma once
#include <string>
#include "voiture.hpp"

class Conducteur{
    private:
        const std::string _nom;
        int _experience;
        Voiture _voiture;
    public:
        Conducteur(const std::string nom, Voiture voiture);
        Conducteur(const std::string nom, int experience, Voiture voiture);
        std::string getNom(){return _nom;};
        int getExperience(){return _experience;};
        Voiture getVoiture(){return _voiture;};
        void changeVoiture(Voiture voiture2);
        void addExperience(int experienceadd){_experience+=experienceadd;};
};

std::string informationConducteur(Conducteur conducteur);