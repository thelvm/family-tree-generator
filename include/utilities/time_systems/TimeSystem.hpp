#ifndef TIMESYSTEM_HPP
#define TIMESYSTEM_HPP

// Base class for dates. As different planets have different orbits and rotations.
class TimeSystem
{
protected:
    long int timestamp;
public:
    TimeSystem();

    bool operator==(const TimeSystem &rhs) const;
    bool operator!=(const TimeSystem &rhs) const;
    bool operator<(const TimeSystem &rhs) const;
    bool operator>(const TimeSystem &rhs) const;
    bool operator<=(const TimeSystem &rhs) const;
    bool operator>=(const TimeSystem &rhs) const;
};

#endif //TIMESYSTEM_HPP
