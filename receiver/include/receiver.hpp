#include <vector>

class Receiver
{
public:
    void readConsole();
    int minValue();
    int maxValue();
    int movingAverageValue();

private:
    std::vector<int> console_data;
};