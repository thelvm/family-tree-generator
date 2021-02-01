#ifndef PERSON_HPP
#define PERSON_HPP

#include <memory>
#include <set>

// Turns out Family trees are Direct Acyclic Graphs.

class Person
{
private:
    static int globalCount;
    int id;

    std::set<std::weak_ptr<Person>> directDecedents;
    std::set<std::weak_ptr<Person>> directAncestors;

    friend class FamilyTree;

public:
    Person();
    std::set<std::weak_ptr<Person>> getDirectDecedents();
    std::set<std::weak_ptr<Person>> getDirectAncestors();

    bool operator<(const Person &rhs) const;
    bool operator>(const Person &rhs) const;
    bool operator<=(const Person &rhs) const;
    bool operator>=(const Person &rhs) const;
    bool operator==(const Person &rhs) const;
    bool operator!=(const Person &rhs) const;

};


#endif //PERSON_HPP
