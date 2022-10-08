#include <assert.h>
#include "include/receiver/receiver.hpp"

int main()
{
    assert(minSoC());
    assert(maxSoC());
    assert(movingAverageSoC());
    assert(minTemperature());
    assert(maxTemperature());
    assert(movingAverageTemperature());
}