#include <assert.h>
#include "statistics_handler.hpp"

void test_receiver()
{
    StatisticsHandler soc_handler;
    StatisticsHandler temperature_handler;

    assert(soc_handler.minValue());
    assert(soc_handler.maxValue());
    assert(soc_handler.movingAverageValue());
    assert(temperature_handler.minValue());
    assert(temperature_handler.maxValue());
    assert(temperature_handler.movingAverageValue());
}