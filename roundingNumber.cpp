// Copyright (c) 2021 haokai All rights reserved
//
// Created by: Haokai
// Created on: Oct 2021
// This Program is about rounding number
#include <iostream>
#include <string>
#include <cmath>

void roundNumber(float &userNumberNumber, int &userDecimalNumber) {
    // This Program is about rounding number
    float numberFloat;
    int numberFloatFinal;

    // process
    numberFloat = userNumberNumber * pow(10, userDecimalNumber) + 0.5;
    numberFloatFinal = numberFloat;
    userNumberNumber = numberFloatFinal / pow(10, userDecimalNumber);
}

main() {
    // This function just call other functions
    std::string userNumberString;
    float userNumberNumber;
    std::string userDecimalString;
    int userDecimalNumber;
    float roundingNumber;

    // input
    std::cout << "Enter the number you want to round: ";
    std::cin >> userNumberString;
    std::cout << "Enter how many decimal places you want to round by: ";
    std::cin >> userDecimalString;
    std::cout << "" << std::endl;

    try {
        userNumberNumber = std::stof(userNumberString);
        userDecimalNumber = std::stoi(userDecimalString);

        // call functions
        roundNumber(userNumberNumber, userDecimalNumber);

        // output
        std::cout << "The rounded number is " << userNumberNumber << std::endl;
    } catch (std::invalid_argument) {
        // output
        std::cout << "You didn't enter an integer." << std::endl;
    }

    std::cout << "\nDone." << std::endl;
}
