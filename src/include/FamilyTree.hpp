#ifndef FAMILYTREE_HPP
#define FAMILYTREE_HPP

#include "Person.hpp"

#include <set>
#include <memory>

class FamilyTree
{
private:
    std::set<std::shared_ptr<Person>> members;
};

#endif //FAMILYTREE_HPP
