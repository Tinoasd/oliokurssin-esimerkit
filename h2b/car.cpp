#include "car.h"
#include <iostream>

Car::Car(std::string carBrand, std::string carModel, int carYearModel)
    : brand(carBrand), model(carModel), yearModel(carYearModel){}

void Car::printData(){
    std::cout << brand << ' ' << model << ' ' << yearModel << '\n';
}
