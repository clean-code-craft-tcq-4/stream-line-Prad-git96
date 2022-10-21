#include <vector>
#include <map>
#include <iostream>
#include <string>
#include <sstream>

std::vector<std::string> readConsole()
{
    std::cout << "Waiting for input...";
    std::string input_stream;
    std::vector<std::string> received_data;
    std::string delimiter = ",";
    while (std::getline(std::cin, input_stream))
    {
        received_data.push_back(input_stream);
        // std::cout << "Received line: " << input_stream << std::endl;
    }
    std::cout << "Input received. Processing data...\n\n";
    return received_data;
}

std::vector<std::string> extractSensorData(std::vector<std::string> input)
{
    std::vector<std::string> combined_sensor_data;
    for (auto it : input)
    {
        std::stringstream console_line(it);
        std::string sensor_data;
        while (std::getline(console_line, sensor_data, ','))
        {
            combined_sensor_data.push_back(sensor_data.substr(sensor_data.rfind('=') + 1)); // extract and pass only int data
        }
    }

    return combined_sensor_data;
}

std::map<int, std::vector<int>> splitData(std::vector<std::string> combined_sensor_data)
{
    std::map<int, std::vector<int>> sensors;

    for (int i = 0; i < combined_sensor_data.size() - 1; i += 2)
    {
        sensors[0].push_back(std::stoi(combined_sensor_data[i]));
        sensors[1].push_back(std::stoi(combined_sensor_data[i + 1]));
    }

    return sensors;
}
