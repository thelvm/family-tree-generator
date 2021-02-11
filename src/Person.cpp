#include "Person.hpp"

int Person::globalId = 0;

Person::Person()
{
    id = ++globalId;
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
