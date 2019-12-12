// Write a program that defines the named constant PI, const double PI = 3.14159;, which stores the value of π. The program should use PI and the functions listed in Table 6-1 to accomplish the following:

// Output the value of √π .
// Prompt the user to input the value of a double variable r, which stores the radius of a sphere. The program then outputs the following:
// The value of 4.0πr², which is the surface area of the sphere.
// The value of (4.0/3.0)πr³, which is the volume of the sphere.
// You should format your output like the following example:

// Surface area of the sphere: 4 * PI * 5.00 ^ 2 = 314.16
// Volume of the sphere: 4 / 3 * PI *

#include <iostream>
#include <cmath> 
#include <iomanip>
   
using namespace std;

const double PI = 3.14159;
double r;

double area (double r) {
     return 4.0 * PI * pow(r, 2.0);
}

double volume (double r) {
    return (4.0 / 3.0) * PI * pow(r, 3.0);
}

int main() {
    
    cout << "What's the radius of the sphere? ";
    cin >> r;
    
    cout << fixed << showpoint;
    cout << setprecision(2);
    
    cout << sqrt(PI) << '\n';
    cout << "Surface area of the sphere: 4 * PI * " << r << " ^ 2 = " << area(r) << "\n";
    cout << "Volume of the sphere: 4 / 3 * PI * " << r << " ^ 3 = " << volume(r) << "\n";
}