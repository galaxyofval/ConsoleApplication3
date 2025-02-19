// ConsoleApplication3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // Declaring the needed variables
    int customerTotal;
    float percentageOfBuyers; // Shows how much of the customerbase wants to buy drinks each week.
    float percentageOfCitrusEnjoyers; // Shows how many prefer citrus over any other flavor.

    // Ask the user a few questions to get the numbers the program needs.
    cout << "How many people have you recently surveyed?" << endl;
    cin >> customerTotal;
    cout << "What percentage of customers bought drinks in the past week?" << endl;
    cin >> percentageOfBuyers;
    cout << "Of those customers, what percentage of customers enjoyed citrus more than any other flavor?" << endl;
    cin >> percentageOfCitrusEnjoyers;
    cout << "Of the " << customerTotal << " people surveyed, " << round((customerTotal * (percentageOfBuyers / 100))) << " of them buy at least one energy drink every week." << endl; // Does the math to show the amount of people who have bought a drink in the past week.
    cout << "Out of the " << round((customerTotal * (percentageOfBuyers / 100))) << " that buy one or more drinks each week, " << round(((customerTotal * (percentageOfBuyers / 100)) * (percentageOfCitrusEnjoyers / 100))) << " like citrus flavor more than any other flavor." << endl; // Does the math to calculate the people who enjoy citrus flavors the most out of the people who buy at least one energy drink within the past week.

    return 0;
}
