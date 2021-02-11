#include "generators/PersonGenerator.hpp"

#include <string>

std::shared_ptr<Person> PersonGenerator::makeNewPerson()
{
    std::shared_ptr<Person> newPerson = std::make_shared<Person>();

    newPerson->name = "Person " + std::to_string(newPerson->id);



    return newPerson;
}
