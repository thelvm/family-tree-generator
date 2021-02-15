#include "generators/NameGenerator.hpp"

#include <random>
#include <array>

std::string NameGenerator::generateName()
{

    static const std::array<const char, 21> consonants = {
        'b',
        'c',
        'd',
        'f',
        'g',
        'h',
        'j',
        'k',
        'l',
        'm',
        'n',
        'p',
        'q',
        'r',
        's',
        't',
        'v',
        'w',
        'x',
        'y',
        'z'
    };

    static const std::array<const char, 5> vowels = {
        'a',
        'e',
        'i',
        'o',
        'u'
    };

    // Very simple naive first implementation
    std::string name;

    std::normal_distribution<> lengthDistribution(6, 0.2);
    std::uniform_int_distribution<> letter(0, 26);

    // Use uniform dist to determine the first letter



    return name;
}
