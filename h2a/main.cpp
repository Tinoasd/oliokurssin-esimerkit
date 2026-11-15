#include "car.h"
#include "rectangle.h"
#include <iostream>
#include "student.h"
#include <memory>

int main()
{
    Car car;
    car.setBrand("Toyota");
    car.setModel("Corolla");
    car.setYearModel(2020);
    car.printData();

    Rectangle* rectangle = new Rectangle;
    rectangle->setWidth(5.5);
    rectangle->setHeight(3.0);

    std::cout << "Pinta-ala = " << rectangle->getArea() << '\n';
    std::cout << "Piiri = " << rectangle->getCircum() << '\n';

    delete rectangle;

    std::unique_ptr<Student> student = std::make_unique<Student>();
    student->setName("Kari");
    student->setStudentNumber(12345);
    student->setAverage(4.25);

    std::cout << "Nimi = " << student->getName() << '\n';
    std::cout << "Opiskelijanumero = " << student->getStudentNumber() << '\n';
    std::cout << "Keskiarvo = " << student->getAverage() << '\n';


    return 0;
}
