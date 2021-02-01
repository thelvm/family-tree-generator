#ifndef FAMILYTREE_HPP
#define FAMILYTREE_HPP

#include "Person.hpp"

#include <set>
#include <memory>

typedef struct familyTreeGenerationParameters
{
    int generationsBefore = -1;
    int generationsAfter = -1;
    // Fertility rate?
} FamilyTreeGenerationParameters;

class FamilyTree
{
private:
    std::set<std::shared_ptr<Person>> members;

    FamilyTreeGenerationParameters generationParameters;
public:
    /// Sets the generation parameters for the family tree. To be used before generate()
    void setGenerationParameters(const FamilyTreeGenerationParameters &parameters);
    /// Generates the family tree using the previously set generation parameters;
    void generate();
    /// Generates the family tree using the given parameters, ignoring any previously set parameters
    void generate(const FamilyTreeGenerationParameters &parameters);
};

#endif //FAMILYTREE_HPP
