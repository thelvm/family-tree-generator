#ifndef GENERATOR_HPP
#define GENERATOR_HPP

#include <random>
#include <set>
#include <memory>

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
    virtual std::shared_ptr<T> generate() = 0;
    [[maybe_unused]]
    virtual std::set<std::shared_ptr<T>> generateMultiple() = 0;
    [[maybe_unused]]
    virtual std::set<std::shared_ptr<T>> generateMultipleSingleThread() = 0;
};

#endif //GENERATOR_HPP
