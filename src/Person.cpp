#include "Person.hpp"

int Person::globalCount = 0;

Person::Person()
{
    id = ++globalCount;
}

std::set<std::weak_ptr<Person>> Person::getDirectDecedents()
{
    return directDecedents;
}

std::set<std::weak_ptr<Person>> Person::getDirectAncestors()
{
    return directAncestors;
}

bool Person::operator<(const Person &rhs) const
{
    return birthday < rhs.birthday;
}

bool Person::operator>(const Person &rhs) const
{
    return rhs < *this;
}

bool Person::operator<=(const Person &rhs) const
{
    return !(rhs < *this);
}

bool Person::operator>=(const Person &rhs) const
{
    return !(*this < rhs);
}

bool Person::operator==(const Person &rhs) const
{
    return id == rhs.id;
}

bool Person::operator!=(const Person &rhs) const
{
    return !(rhs == *this);
}
