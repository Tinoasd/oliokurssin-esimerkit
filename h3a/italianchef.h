#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H

#include "chef.h"

class italianchef : public Chef
{
public:
    italianchef(std::string chefName);
    ~italianchef();

    std::string getName();
    void makePasta();
};

#endif // ITALIANCHEF_H
