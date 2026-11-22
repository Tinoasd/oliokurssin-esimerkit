#include "italianchef.h"
#include <iostream>

italianchef::italianchef(std::string chefName)
    : Chef(chefName){
    std::cout << "ItalianChef " << name << " konstruktori\n";
}

italianchef::~italianchef() {
    std::cout << "ItalianChef " << name << " destruktori\n";
}

std::string italianchef::getName(){
    std::cout << "ItalianChef " << name << " getName\n";
    return name;
}

void italianchef::makePasta(){
    std::cout << "Italian Chef " << name << " makes pasta\n";
}
