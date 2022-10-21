#include <vector>
#include <map>
#include <iostream>
#include <string>
#include "../test/test_receiver.hpp"
#include "console_reader.hpp"

int main()
{
    std::vector<std::string> console_input{readConsole()};
    std::map<int, std::vector<int>> sensor_data = splitData(extractSensorData(console_input));

    for(auto it : sensor_data)
    {
        StatisticsHandler sensor;
        sensor.setConsoleData(it.second);
        std::cout << "For sensor " << it.first << std::endl;
        std::cout << "Maximum value: " << sensor.maxValue() << std::endl;
        std::cout << "Minimum value: " << sensor.minValue() << std::endl;
        std::cout << "Moving average of last five values: " << sensor.movingAverageValue() << std::endl;
        std::cout << "\n";
    }

    test_receiver();
}