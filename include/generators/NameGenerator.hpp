#ifndef NAMEGENERATOR_HPP
#define NAMEGENERATOR_HPP

#include "Generator.hpp"

#include <string>

class NameGenerator : public Generator<std::string> {
public:
    std::shared_ptr<std::string> generate();
};

#endif //NAMEGENERATOR_HPP
