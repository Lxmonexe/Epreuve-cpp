#pragma once 
#include <string>

enum class Type {Diesel, Essence, Electrique};

class Voiture{
    private:
        const std::string _modele;
        const Type _type;
        const int _annee;
        int _km;
        std::string _utilisation;
    public:
        Voiture(const std::string modele, const Type type, const int annee, int km);
        std::string getModele(){return _modele;};
        std::string getType();
        int getAnnee(){return _annee;};
        int getKm(){return _km;};
        std::string getUtilisation(){return _utilisation;};
        void addKm(int addKm){_km+=addKm;};
};

std::string informationVoiture(Voiture voiture);