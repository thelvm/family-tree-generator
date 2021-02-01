#ifndef FAMILYTREE_HPP
#define FAMILYTREE_HPP

#include "Person.hpp"

#include <set>
#include <memory>

typedef struct familyTreeGenerationParameters
{
    int generationsBefore;
    int generationsAfter;
    // Fertility rate?
} FamilyTreeGenerationParameters;

class FamilyTree
{
private:
    std::set<std::shared_ptr<Person>> members;

public:
    /// Sets the generation parameters for the family tree. To be used before generate()
    void setGenerationParameters(const FamilyTreeGenerationParameters &generationParameters);
    /// Generates the family tree using the previously set generation parameters;
    void generate();
    /// Generates the family tree using the given parameters, ignoring any previously set parameters
    void generate(const FamilyTreeGenerationParameters &generationParameters);
};

#endif //FAMILYTREE_HPP
