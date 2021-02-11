#ifndef PERSONGENERATOR_HPP
#define PERSONGENERATOR_HPP

#include "Person.hpp"

#include <memory>

class PersonGenerator
{
public:
    std::shared_ptr<Person> makeNewPerson();
};

#endif //PERSONGENERATOR_HPP
