#include "dog.h"
#include <iostream>

Dog::~Dog() {
    std::cout << "Dog destruktori\n";
}

void Dog::callOut(){
    std::cout << "Koira haukkuu!\n";
}
