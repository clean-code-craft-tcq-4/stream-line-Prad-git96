#include "statistics_handler.hpp"
#include <vector>
#include <numeric>
#include <iostream>
#include <algorithm>
int StatisticsHandler::minValue()
{
    return *std::min_element(console_data.begin(), console_data.end());
}

int StatisticsHandler::maxValue()
{
    return *std::max_element(console_data.begin(), console_data.end());
}

double StatisticsHandler::movingAverageValue()
{
    return std::accumulate(console_data.rbegin(), console_data.rbegin()+5, 0)/5.;
}

void StatisticsHandler::setConsoleData(std::vector<int> input_data)
{
    console_data = input_data;
}