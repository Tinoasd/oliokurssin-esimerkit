#include <iostream>
#include "car.h"
#include <vector>


int main()
{
    std::vector<Car> carList;

    carList.push_back(Car("Toyota", "Soarer", 2010));
    carList.push_back(Car("Audi", "E-tron", 2024));
    carList.push_back(Car("Bmw", "M5", 2022));

    std::cout << "Listan toinen auto\n";
    carList[1].printData();

    std::cout << "\nKaikki autot\n";
    for (Car& car : carList){
        car.printData();
    }
    return 0;
}
