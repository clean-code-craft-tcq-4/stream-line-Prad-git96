#include <vector>

class StatisticsHandler
{
public:
    int minValue();
    int maxValue();
    int movingAverageValue();

private:
    std::vector<int> console_data;
};