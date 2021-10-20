// Copyright (c) 2021 haokai All rights reserved
//
// Created by: Haokai
// Created on: Oct 2021
// This Program calculate the volume of a cylinder
#include <iostream>
#include <string>
#include <cmath>

float roundNumber(float userNumberNumber, float userDecimalNumber) {
    // This Program calculate the volume of a cylinder
    float numberOutput;
    float numberFloat;
    int numberFloatFinal;

    // process
    numberFloat = userNumberNumber * pow(10, userDecimalNumber) + 0.5;
    numberFloatFinal = numberFloat;
    numberOutput = numberFloatFinal / pow(10, userDecimalNumber);

    return numberOutput;
}

main() {
    // This function just call other functions
    std::string userNumberString;
    float userNumberNumber;
    std::string userDecimalString;
    float userDecimalNumber;
    float roundingNumber;

    // input
    std::cout << "Enter the number you want to round: ";
    std::cin >> userNumberString;
    std::cout << "Enter how many decimal places you want to round by: ";
    std::cin >> userDecimalString;
    std::cout << "" << std::endl;

    try {
        userNumberNumber = std::stof(userNumberString);
        userDecimalNumber = std::stof(userDecimalString);

        // call functions
        roundingNumber = roundNumber(userNumberNumber, userDecimalNumber);

        // output
        std::cout << "The rounded number is " << roundingNumber << std::endl;
    } catch (std::invalid_argument) {
        // output
        std::cout << "You didn't enter an integer." << std::endl;
    }

    std::cout << "\nDone." << std::endl;
}
