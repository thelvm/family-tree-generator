#ifndef GENERATOR_HPP
#define GENERATOR_HPP

#include <random>
#include <set>

typedef int seed_t; // TODO Use custom class so other things (string, real noise) can be used to initialize a string

template<typename T>
class Generator
{
protected:
    seed_t seed;
    std::mt19937 seedGenerator;
public:
    Generator() = delete;
    explicit Generator(seed_t initialSeed);
    virtual T generate() = 0;
    [[maybe_unused]]
    virtual std::set<T> generateMultiple() = 0;
    [[maybe_unused]]
    virtual std::set<T> generateMultipleSingleThread() = 0;
};

#endif //GENERATOR_HPP
