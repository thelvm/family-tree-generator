#include "utilities/time_systems/TimeSystem.hpp"

bool TimeSystem::operator==(const TimeSystem &rhs) const
{
    return timestamp == rhs.timestamp;
}

bool TimeSystem::operator!=(const TimeSystem &rhs) const
{
    return !(rhs == *this);
}

bool TimeSystem::operator<(const TimeSystem &rhs) const
{
    return timestamp < rhs.timestamp;
}

bool TimeSystem::operator>(const TimeSystem &rhs) const
{
    return rhs < *this;
}

bool TimeSystem::operator<=(const TimeSystem &rhs) const
{
    return !(rhs < *this);
}

bool TimeSystem::operator>=(const TimeSystem &rhs) const
{
    return !(*this < rhs);
}

TimeSystem::TimeSystem()
    : timestamp(0)
{
}
