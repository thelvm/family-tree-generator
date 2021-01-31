#include "Person.hpp"

Person::Person()
{
    id = ++globalCount;
}

std::map<int, std::weak_ptr<Person>> Person::getDirectDecedents()
{
    return directDecedents;
}

std::map<int, std::weak_ptr<Person>> Person::getDirectAncestors()
{
    return directAncestors;
}
