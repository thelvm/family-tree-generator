#ifndef PERSONGENERATOR_HPP
#define PERSONGENERATOR_HPP

#include "Person.hpp"
#include "Generator.hpp"

#include <memory>

class PersonGenerator: public Generator<Person>
{
public:
    std::shared_ptr<Person> generate();
};

#endif //PERSONGENERATOR_HPP
