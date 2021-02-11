#ifndef PERSON_HPP
#define PERSON_HPP

#include <utilities/time_systems/TimeSystem.hpp>

#include <memory>
#include <map>
#include <string>

class Person
{
private:
    friend class PersonGenerator;

    static int globalId;
    int id;

    std::string name;

    std::shared_ptr<Person> biologicalMother;
    std::shared_ptr<Person> biologicalFather;
    std::map<int, Person> biologicalChildren;

    TimeSystem birthday;

    bool canGiveBirth;

public:
    Person();

    bool operator<(const Person &rhs) const;
    bool operator>(const Person &rhs) const;
    bool operator<=(const Person &rhs) const;
    bool operator>=(const Person &rhs) const;
    bool operator==(const Person &rhs) const;
    bool operator!=(const Person &rhs) const;

};


#endif //PERSON_HPP
