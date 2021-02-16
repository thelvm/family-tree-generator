#include "generators/Generator.hpp"

#include <random>


template<typename T>
Generator<T>::Generator(seed_t initialSeed)
{
    seed = initialSeed;
    seedGenerator.seed(initialSeed);
}
