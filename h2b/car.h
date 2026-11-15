#ifndef CAR_H
#define CAR_H
#include <string>


class Car
{
public:
    Car(std::string carBrand, std::string carModel, int carYearModel);
    void printData();

private:
    std::string brand;
    std::string model;
    int yearModel;
};

#endif // CAR_H
