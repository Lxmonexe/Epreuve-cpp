#include "voiture.hpp"
#include "conducteur.hpp"
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
    //Fin question 5


    return 0;
}