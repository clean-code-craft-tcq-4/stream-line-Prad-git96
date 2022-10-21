#include <assert.h>
#include "statistics_handler.hpp"
#include <iostream>
void test_receiver()
{
    StatisticsHandler soc_handler;

    soc_handler.setConsoleData(std::vector<int>{1, 5, 6, 2, 4, 3, 7});

    assert(soc_handler.minValue() == 1);
    assert(soc_handler.maxValue() == 7);
    assert(soc_handler.movingAverageValue() == 22/5.);
}