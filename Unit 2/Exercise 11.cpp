// Write a program that :

// 1. Prompts the capacity, in gallons, of an automobile fuel tank and the miles per gallon the automobile can be driven.
// 2. Output the number of miles the automobile can be driven without refueling.

#include <iostream>

using namespace std;                                   
 
int main()
{
// Variables
double capacity;
double miles;
    
cin >> capacity >> miles; 
double totalMiles = capacity * miles;

cout << totalMiles;
    return 0;
}