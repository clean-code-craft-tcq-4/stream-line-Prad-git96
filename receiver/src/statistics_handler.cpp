#include "statistics_handler.hpp"
#include <vector>
#include <numeric>

int StatisticsHandler::minValue()
{
    return *std::min(console_data.begin(), console_data.end());
}

int StatisticsHandler::maxValue()
{
    return *std::max(console_data.begin(), console_data.end());
}

int StatisticsHandler::movingAverageValue()
{
    return std::accumulate(console_data.rbegin(), console_data.rbegin()+5, 0);
}