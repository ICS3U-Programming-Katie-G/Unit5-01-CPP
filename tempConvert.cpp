// Copyright (c) 2022 Katie G All rights reserved.
//
// Created by: Katie G
// Created on : December 13th, 2022
// #!/usr/bin/env python3
// Created by : Katie G
// Created on : December 13th, 2022
// This program will get the user's temperature in celsius,
// then use a separate function to calculate the temperature in
// fahrenheit, then display it back to the user.
#include <iostream>
#include <string>


// this function will get the user temperature in celsius,
// then it will convert the temperature to fahrenheit, then it will
// display it back to the user.
void fahrenheit() {
    // defining the celsius and fahrenheit variables.
    float userCelsiusFloat, calculatedFahrenheit;
    std::string userCelsius;

    // getting the user celsius.
    std::cout << "Please enter your temperature in Celsius! ";
    std::cin >> userCelsius;

    // try...catch to convert user string to float/
    try {
        userCelsiusFloat = std::stof(userCelsius);

        // convert the celsius to fahrenheit.
        calculatedFahrenheit = (9.0 / 5.0) * userCelsiusFloat + 32;

        // display the converted fahrenheit back to the user.
        std::cout << userCelsiusFloat << " in Fahrenheit is ";
        std::cout << calculatedFahrenheit << "!\n";
    } catch (std::invalid_argument) {
        std::cout << "Please enter a valid number! (decimals accepted)\n";
    }

    std::cout << "Thank you for using this program!\n" << std::endl;
}

// this function calls the fahrenheit function
int main() {
    // calls the fahrenheit function.
    fahrenheit();
}
