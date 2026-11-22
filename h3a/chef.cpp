#include "chef.h"
#include <iostream>

Chef::Chef(std::string chefName)
    : name(chefName){
    std::cout << "Ched " << name << " konstruktori\n";
}

Chef::~Chef(){
    std::cout <<"Chef " << name << " destruktori\n";
}

void Chef::makeSalad(){
    std::cout << "Chef " << name << " makes salad\n";
}

void Chef::makeSoup(){
    std::cout << "Chef " << name << " makes soup\n";
}
