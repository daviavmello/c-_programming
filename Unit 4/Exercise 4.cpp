// The statements in the file main.cpp are in incorrect order.

// Rearrange the statements so that they prompt the user to input:

// The shape type (rectangle, circle, or cylinder)
// The appropriate dimension of the shape.
// Note: For grading purposes place the cylinder height statement before the radius statement.

// The program then outputs the following information about the shape:

// For a rectangle, it outputs the area and perimeter
// For a circle, it outputs the area and circumference
// For a cylinder, it outputs the volume and surface area.
// Use 3.1416 as the constant value for any calculations that may need \piπ.

// After rearranging the statements, your program should be properly indented.

using namespace std;

#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

int main() {
    
    const double PI = 3.1416;
    string shape;
    double height;
    double width;
    double radius;
    double length;
    
    cout << fixed << showpoint << setprecision(2);

    cout << "Enter the shape type: (rectangle, circle, cylinder) ";
    cin >> shape;
    cout << endl;
    
    if (shape == "rectangle") {
        cout << "Enter the width of the rectangle: ";
        cin >> width;
        cout << endl;
        
        cout << "Enter the length of the rectangle: ";
        cin >> length;
        cout << endl;
        
        cout << "Area of the rectangle = "
        << length * width << endl;
  
        cout << "Perimeter of the rectangle = "
             << 2 * (length + width) << endl;
    }
    
    else if (shape == "circle") {
        cout << "Enter the radius of the circle: ";
        cin >> radius;
        cout << endl;
        
        cout << "Area of the circle = "
             << PI * pow(radius, 2.0) << endl;
        
        cout << "Circumference of the circle: "
             << 2 * PI * radius << endl;
    }
    
    else if (shape == "cylinder") {
        cout << "Enter the height of the cylinder: ";
        cin >> height;
        cout << endl;
        
        cout << "Enter the radius of the base of the cylinder: ";
        cin >> radius;
        cout << endl;
        
        cout << "Surface area of the cylinder: "
         << 2 * PI * radius * height + 2 * PI * pow(radius, 2.0)
         << endl;
        
        cout << "Volume of the cylinder = "
        << PI * pow(radius, 2.0)* height << endl;
    }
  
    else
        cout << "The program does not handle " << shape << endl;
    
    return 0;

}