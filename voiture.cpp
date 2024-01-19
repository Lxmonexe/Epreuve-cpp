#include "voiture.hpp"


Voiture::Voiture(const std::string modele, const Type type, const int annee, int km): _modele(modele), _type(type), _annee(annee), _km(km){
    if(_km/(2024-_annee) > 20000){
        _utilisation="Beaucoup utilisee";
    }
    else {
        _utilisation="Fablement utilisee";
    }
};


std::string Voiture::getType(){
    switch(_type)
    {
        case Type::Diesel:
            return "Diesel";
            break;
        case Type::Essence:
            return "Essence";
            break;
        case Type::Electrique:
            return "Electrique";
            break;
        default:
            return "Unknown";
    }
};

std::string informationVoiture(Voiture voiture){
    return voiture.getModele() + " (" + voiture.getType() + ") - " + std::to_string(voiture.getAnnee()) + " - " + std::to_string(voiture.getKm()) + " - " + voiture.getUtilisation(); 
}