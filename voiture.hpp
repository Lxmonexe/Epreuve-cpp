#pragma once 
#include <string>

enum class Type {Diesel, Essence, Electrique};

class Voiture{
    private:
        std::string _modele;
        Type _type;
        int _annee;
        int _km;
        std::string _utilisation;
    public:
        Voiture(std::string modele, Type type, int annee, int km);
        std::string getModele(){return _modele;};
        std::string getType();
        int getAnnee(){return _annee;};
        int getKm(){return _km;};
        std::string getUtilisation(){return _utilisation;};
        void addKm(int addKm){_km+=addKm;};
        bool estUsee();
};

std::string informationVoiture(Voiture voiture);