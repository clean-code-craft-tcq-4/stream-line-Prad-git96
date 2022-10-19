#include <vector>
#include <iostream>
#include <string>
#include "../test/test_receiver.hpp"

#include <algorithm>
// #include "statistics_handler.hpp"

std::vector<std::string> readConsole()
{
    std::cout << "Waiting for input\n";
    std::string input_stream;
    std::vector<std::string> received_data;
    std::string delimiter = ",";
    while (std::getline(std::cin, input_stream))
    {
        received_data.push_back(input_stream.substr(0, input_stream.find(delimiter)));
        std::cout << "Received line: " << input_stream << std::endl;
    }

    return received_data;
}

void extractSensorData(std::vector<std::string> input)
{
    std::vector<StatisticsHandler> sensor_data;
}

int main()
{
    std::vector<std::string> console_input{readConsole()};
    for(auto it : console_input)
    {
        std::cout << it << std::endl;
    }
}