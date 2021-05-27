// Copyright (c) 2021 Nika Zamani All rights reserved
//
// Created by Nika Zamani
// Created on April 2021
// This program will read an integer and display its sign

#include <iostream>

int main() {
    // this function reads an integer and displays its sign

    // input
    int integer;

    std::cout << "Enter an integer: ";
    std::cin  >> integer;
    std::cout << "" << std::endl;

    // process
    if (integer > 0) {
        std::cout << integer;
        std::cout << " is a positive number. ";
    } else if (integer < 0) {
        std::cout << integer;
        std::cout << " is a negative number. ";
    } else {
        std::cout << integer;
        std::cout << " is just zero! ";
    }
std::cout << std::endl;
std::cout << std::endl;
std::cout << "Done." << std::endl;
}
