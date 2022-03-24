// Copyright (c) 2022 Jackson Naufal All rights reserved
// Created By Jackson Naufal
// Created On March 2022
// This is a "random number guesser"



#include <iostream>

int main() {
    // this function is a random number guesser
    const int guess_number = 8;
    int random_number;


    // input
    std::cout << " What is your random number: ";
    std::cin >> random_number;
    std::cout << "" << std::endl;
    // process
    if (guess_number != random_number) {
    // output
        std::cout << "Guess is incorrect";
    }
    // process
    if (guess_number == random_number) {
    // output
        std::cout << "Guess is correct";
    }
}
