#include <vector>

class StatisticsHandler
{
public:
    int minValue();
    int maxValue();
    double movingAverageValue();
    void setConsoleData(std::vector<int> input_data);

private:
    std::vector<int> console_data;
};