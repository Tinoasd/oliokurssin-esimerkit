#include <memory>
#include "animal.h"
#include "dog.h"

using namespace std;

int main()
{
    std::unique_ptr<Animal> animal = std::make_unique<Animal>();
    std::unique_ptr<Animal> dog = std::make_unique<Dog>();

    animal->callOut();
    dog->callOut();

    return 0;
}
