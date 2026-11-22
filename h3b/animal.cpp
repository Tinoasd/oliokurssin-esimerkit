#include "animal.h"
#include <iostream>

Animal::~Animal() {
    std::cout << "Animal destruktori\n";
}

void Animal::callOut(){
    std::cout << "Eläin ääntelee.\n";
}
