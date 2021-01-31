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
public:
    Person();
};


#endif //PERSON_HPP
