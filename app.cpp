#include "voiture.hpp"
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
    //Question 3

    return 0;
}