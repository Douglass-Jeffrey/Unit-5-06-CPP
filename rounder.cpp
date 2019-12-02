// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.

// Created by: Douglass Jeffrey
// Created on: Nov 2019
// This program rounds the user's number

#include <iostream>
#include <iomanip>
#include <cmath>


float RoundFunction(float &number, float decimalPoint) {
    // This function rounds the inputted number

    // Variables
    float roundedNumber;

    // Process
    roundedNumber = number*pow(10, decimalPoint);
    roundedNumber = roundedNumber + 0.5;
    roundedNumber = static_cast<int>(roundedNumber);
    roundedNumber = roundedNumber/pow(10, decimalPoint);

    return roundedNumber;
}

int main() {
    // This function accepts the values that are to be rounded

    // Variables
    std::string decimal;
    std::string rounder;
    float roundedVal;
    float userNumber;
    int intRounder;

    // Process
    while (true) {
        std::cout << "Enter the number you wish to be rounded:" << std::endl;
        std::cin >> decimal;
        std::cout << "Enter how many decimal places you want left:" \
        << std::endl;
        std::cin >> rounder;

        try {
            userNumber = std::stof(decimal);
            intRounder = std::stoi(rounder);
            if (userNumber == std::stof(decimal) && \
                intRounder == std::stoi(rounder)) {
                    roundedVal = RoundFunction(userNumber, intRounder);
                    std::cout << "" << std::endl;
                    std::cout << "Your number rounded is: " \
                    << roundedVal << std::endl;
                    break;
                } else {
                    std::cout << "Please input only valid numbers" << std::endl;
                }
        } catch (std::invalid_argument) {
            std::cout << "Please input only valid numbers" << std::endl;
            std::cout << "" << std::endl;
        }
    }
}
