#ifndef PERSON_HPP
#define PERSON_HPP

#include <memory>
#include <map>

class Person
{
private:
    static int globalCount;
    int id;

    std::map<int, std::weak_ptr<Person>> directDecedents;
    std::map<int, std::weak_ptr<Person>> directAncestors;

public:
    Person();
    std::map<int, std::weak_ptr<Person>> getDirectDecedents();
    std::map<int, std::weak_ptr<Person>> getDirectAncestors();
};


#endif //PERSON_HPP
