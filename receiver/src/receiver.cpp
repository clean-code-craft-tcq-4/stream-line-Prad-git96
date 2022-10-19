#include <vector>
#include <iostream>
#include <string>
#include "../test/test_receiver.hpp"

void readConsole()
{
    std::cout << "Waiting for input\n";
    std::string input_stream;
    while (std::getline(std::cin, input_stream))
    {
        std::cout << "Received line: " << input_stream << std::endl;
    }
}

int main()
{
    readConsole();
}