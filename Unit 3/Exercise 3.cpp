// Write a program that accepts as input the mass, in grams, and density, in grams per cubic centimeters, and outputs the volume of the object using the formula: volume = mass / density.

// Format your output to two decimal places.

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

double mass, density, volume;
        
cout << setprecision(2) << fixed;
    
cout << "What's the mass, in grams, of the object? ";
cin >> mass;
cout << endl;
    
cout << "What's the density, in grams per cubic centimeters, of the object? ";
cin >> density;
cout << endl;

volume = mass/density;    
    
cout << "The volume of your object is: ";
cout << volume;
cout << endl;

return 0;
}
