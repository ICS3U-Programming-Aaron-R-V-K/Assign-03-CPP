// Copyright (2025) Aaron Rivelino All rights reserved.
// Date: April 9, 2025
// The code determines the air quality level
// based on the user input AQI value

#include <iostream>
#include <string>
#include <cmath>

int main() {
    // Defines the variables
    std::string aqiStr;
    int aqiInt;
    float aqiFloat;

    // Intro message to the user
    std::cout
        << "Welcome to the Air Quality Index (AQI) Checker!" << std::endl;
    std::cout << "Enter a number between 0 and 500 to check air quality.\n"
              << std::endl;

    // Get user input as a string
    std::cout << "Enter the AQI number: ";
    std::cin >> aqiStr;

    try {
        // Convert the string input to a Float and
        // then covert it to an integer by rounding
        // the decimal to the nearest number
        aqiFloat = std::stof(aqiStr);
        aqiInt = round(aqiFloat);

        // Check if the AQI number is in the valid range
        if (aqiInt < 0 || aqiInt > 500) {
            std::cout << "Error: The AQI needs to be between 0 and 500."
            << std::endl;
        } else {
            // Nested conditions for each AQI range
            // Answer if the number is less or equal to 50
            if (aqiInt <= 50) {
                std::cout << "Air Quality: Good" << std::endl;

            // Answer if the number is <= to 100
            } else if (aqiInt <= 100) {
                std::cout << "Air Quality: Moderate" << std::endl;

            // Answer if the number is <= 200
            } else if (aqiInt <= 200) {
                std::cout << "Air Quality: Unhealthy" << std::endl;
            // Warning if the number is between 175 and 200
                if (aqiInt > 175) {
                    std::cout << "Warning: Consider staying indoors.\n"
                              << std::endl;
                }

            // Answer if the number is <= 300
            } else if (aqiInt <= 300) {
                std::cout << "Air Quality: Very Unhealthy" << std::endl;

            // else statement if the number is between 300 and 500
            } else {
                std::cout << "Air Quality: Hazardous" << std::endl;
            }
        }

    // Catch statement for invalid input
    } catch (...) {
        // Error handling for invalid input (non-integer input)
        std::cout << "Error: Invalid input. Please enter a valid integer."
        << std::endl;
    }

    return 0;
}
