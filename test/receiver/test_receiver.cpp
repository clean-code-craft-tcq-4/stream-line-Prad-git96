#include <assert.h>
#include "include/receiver/receiver.hpp"

int main()
{
    Receiver soc_receiver;
    Receiver temperature_receiver;

    assert(soc_receiver.minValue());
    assert(soc_receiver.maxValue());
    assert(soc_receiver.movingAverageValue());
    assert(temperature_receiver.minValue());
    assert(temperature_receiver.maxValue());
    assert(temperature_receiver.movingAverageValue());
}