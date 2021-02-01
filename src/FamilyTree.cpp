#include "FamilyTree.hpp"

void FamilyTree::setGenerationParameters(const FamilyTreeGenerationParameters &parameters)
{
    generationParameters = parameters;
}

void FamilyTree::generate()
{
    generate(generationParameters);
}

void FamilyTree::generate(const FamilyTreeGenerationParameters &parameters)
{

}
