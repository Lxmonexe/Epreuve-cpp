#include "voiture.hpp"
#include "conducteur.hpp"
#include "taxis.hpp"
#include "iostream"


int main(){
    //Question 2
    Voiture v1("Tesla Model 3", Type::Electrique, 2022, 30000);
    std::cout<<informationVoiture(v1)<<std::endl;
    v1.addKm(1500);
    std::cout<<informationVoiture(v1)<<std::endl;
    Voiture v2("Tesla Model 3", Type::Electrique, 2020, 100000);
    std::cout<<informationVoiture(v2)<<std::endl;
    //Fin question 2
    
    //Question 4
    Conducteur c1("Elon Musk", 75, v2);
    std::cout<<informationConducteur(c1)<<std::endl;
    Voiture v3("Tesla Model 3", Type::Electrique, 2024, 0);
    if(c1.getVoiture().estUsee())
    {
        c1.changeVoiture(v3);
    }
    
    std::cout<<informationConducteur(c1)<<std::endl;
    c1.addExperience(5);
    std::cout<<informationConducteur(c1)<<std::endl;
    //Fin question 4
    
    
    //Question 6
    Taxis t("G7");
    
    
    Voiture v4("Ford", Type::Essence, 2018, 120000);
    Conducteur c3("michel", 34, v2);
    Conducteur c2("jean", 34, v4);
    t.ajouterConducteur(c1);
    t.ajouterConducteur(c2);
    t.ajouterConducteur(c3);
    informationTaxis(t);
    t.suppConducteur("michel");
    informationTaxis(t);
    t.echangeVoiture(c1,c2);
    informationTaxis(t);



    return 0;
}