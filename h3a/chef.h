#ifndef CHEF_H
#define CHEF_H
#include <string>

class Chef
{
public:
    Chef(std::string chefName);
    ~Chef();
    void makeSalad();
    void makeSoup();

protected:
    std::string name;
};

#endif // CHEF_H
