#include "generators/NameGenerator.hpp"

#include <random>
#include <array>
#include <functional>

std::shared_ptr<std::string> NameGenerator::generate()
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

    std::mt19937 localRandom(seedGenerator());
    std::normal_distribution<> lengthDistribution(6, 0.2);
    std::uniform_int_distribution<> firstLetterDistribution(0, 26);

    // Use uniform dist to determine the first firstLetterDistribution

    int firstLetterInt = [localRandom] { return localRandom(firstLetterDistribution); }

    return std::make_shared<std::string>(name);
}
