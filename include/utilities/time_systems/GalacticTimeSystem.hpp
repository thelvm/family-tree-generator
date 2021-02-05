#ifndef GALACTICTIMESYSTEM_HPP
#define GALACTICTIMESYSTEM_HPP

#include "TimeSystem.hpp"

class GalacticTimeSystem: public TimeSystem
{
private:
public:
    GalacticTimeSystem();
    GalacticTimeSystem(const TimeSystem &timeSystem);

    int getEra();
    int getMonth();
    int getWeek();
    int getDay();
};

#endif //GALACTICTIMESYSTEM_HPP
