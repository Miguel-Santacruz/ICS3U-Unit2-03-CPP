// Copyright (c) 2022 Miguel Santacruz All rights reserved
//
// Created by: Miguel Santacruz
// Created on: Mar 2022
// This program calculates circumference of a circle with
//    radius inputted by user

#include <iostream>

int main() {
    // This function calculates circumference
    const double TAU = 6.28;
    int radius;
    double circumference;

    // Input
    std::cout << "Radius of the circle (cm): ";
    std::cin >> radius;

    // Process
    circumference = radius*TAU;

    // Output
    std::cout << "" << std::endl;
    std::cout << "Its circumference is: " <<
        circumference << " cm." << std::endl;
}
