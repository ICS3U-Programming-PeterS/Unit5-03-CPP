// Copyright (c) 2022 Peter Sobowale All rights reserved.
//
// Created by: Peter Sobowale
// Created on: Nov 27 2022
// This program asks the user for a grade level,
// then returns the middle percentage.

#include <iostream>


// this functiongets the middle percentage of a given grade level
int CalcMark(int newLevel) {
    // declaring the middle percent variable
    int percent;
    // use 14 cases for all levels from 4++ to an R
    switch (newLevel) {
        case 1:
            percent = 100;
            break;
        case 2:
            percent = 98;
            break;
        case 3:
            percent = 91;
            break;
        case 4:
            percent = 83;
            break;
        case 5:
            percent = 78;
            break;
        case 6:
            percent = 75;
            break;
        case 7:
            percent = 71;
            break;
        case 8:
            percent = 68;
            break;
        case 9:
            percent = 65;
            break;
        case 10:
            percent = 61;
            break;
        case 11:
            percent = 58;
            break;
        case 12:
            percent = 55;
            break;
        case 13:
            percent = 51;
            break;
        case 14:
            percent = 25;
            break;
        default:
            return -1;
            break;
    }
    return percent;
}

// this function gets input from the user
// and calls the percent function
int main() {
    // declaring variables 
    std::string levelUser;
    int switchLevelUser = 0, percentUser;

    // gets the level from the user
    std::cout << "Enter the level you want converted to a percentage: ";
    std::cin >> levelUser;
    std::cout << std::endl;

    // checks input then converts it to correct
    // Convert the level to an int for the switch case
    if (levelUser == "4++") {
        switchLevelUser = 1;
    } else if (levelUser == "4+") {
        switchLevelUser = 2;
    } else if (levelUser == "4") {
        switchLevelUser = 3;
    } else if (levelUser == "4-") {
        switchLevelUser = 4;
    } else if (levelUser == "3+") {
        switchLevelUser = 5;
    } else if (levelUser == "3") {
        switchLevelUser = 6;
    } else if (levelUser == "3-") {
        switchLevelUser = 7;
    } else if (levelUser == "2+") {
        switchLevelUser = 8;
    } else if (levelUser == "2") {
        switchLevelUser = 9;
    } else if (levelUser == "2-") {
        switchLevelUser = 10;
    } else if (levelUser == "1+") {
        switchLevelUser = 11;
    } else if (levelUser == "1") {
        switchLevelUser = 12;
    } else if (levelUser == "1-") {
        switchLevelUser = 13;
    } else if (levelUser == "R") {
        switchLevelUser = 14;
    } else {
        switchLevelUser = -1;
    }

    // assign variable to function call that gives percent
    percentUser = CalcMark(switchLevelUser);

    // displays results to user
    if (CalcMark(switchLevelUser) == -1) {
        std::cout << "You entered invalid input, please try again!";
    } else if (CalcMark(switchLevelUser) == 100) {
        std::cout << "Level " << levelUser << " has a percentage of ";
        std::cout << percentUser << "%" << std::endl;
    } else {
        std::cout << "Level " << levelUser << " has a middle percentage of ";
        std::cout << percentUser << "%" << std::endl;
    }
}
