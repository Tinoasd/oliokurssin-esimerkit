#include "chef.h"
#include "italianchef.h"
#include <iostream>

using namespace std;

int main()
{
    Chef chef("Gordon Ramsay");

    chef.makeSalad();
    chef.makeSoup();

    italianchef italianChef("Anthony Bourdain");
    italianChef.makeSalad();
    italianChef.makeSoup();
    italianChef.makePasta();

    std::string chefName = italianChef.getName();
    std::cout << "name of the Italian Chef is " << chefName << '\n';

    return 0;
}
