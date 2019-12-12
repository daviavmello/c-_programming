// Consider the following program in which the statements are in the incorrect order.

// Rearrange the statements in the following order so that the program prompts the user to input:

// 1. The height of the base of a cylinder
// 2. The radius of the base of a cylinder
// The program then outputs (in order):

// 1. The volume of the cylinder.
// 2. The surface area of the cylinder
// Format the output to two decimal places.

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

const double PI = 3.14159;

int main()
{
 
double height;
double radius;
    
cout << fixed << showpoint << setprecision(2);

cout << "Enter the height of the cylinder: ";
cin >> height;
cout << endl;

cout << "Enter the radius of the base of the cylinder: ";
cin >> radius;
cout << endl;

cout << "Volume of the cylinder = "
<< PI * pow(radius, 2.0) * height << endl;

cout << "Surface area: "
<< 2 * PI * radius * height + 2 * PI * pow(radius, 2.0)
<< endl;

return 0;
}