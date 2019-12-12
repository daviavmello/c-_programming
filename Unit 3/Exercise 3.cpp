// Write a program that prompts the user to enter the weight of a person in kilograms and outputs the equivalent weight in pounds (Note that 1 kilogram equals 2.2 pounds). Format your output with two decimal places.

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

double kilos;
double pounds;
    
cout << "How much do you weight? ";
cin >> kilos;
cout << endl;

pounds = kilos * 2.2;

cout << "Your weight in Pounds is: "<< setprecision(2) << fixed << pounds << endl;

return 0;
}