#include "car.h"
#include <iostream>

void Car::setBrand(std::string newBrand){
    brand = newBrand;
}

void Car::setModel(std::string newModel){
    model = newModel;
}

void Car::setYearModel(int newYearModel){
    yearModel = newYearModel;
}

void Car::printData(){
    std::cout << brand << ' ' << model << ' ' << yearModel << '\n';
}
