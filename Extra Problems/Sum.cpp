// Write three functions, float getNum(),  float add(float, float), void outSum(float);  that asks user for two numbers, finds the sum of two numbers, and displays the sum repeatedly in a main program until the user enter “0” for either one of the numbers. 

#include<iostream>

using namespace std;


float numOne, numTwo;

float getNum()
{
    cout << "Enter two numbers: \n";
    
        cout << "1. Enter first number: ";
        cin >> numOne;
        cout << "2. Enter second number: ";
        cin >> numTwo;
    
      return 0;
}

float add(float x, float y)
{
      float sum;
      sum = x + y;
    
      return sum;
}

void outSum(float z) 
{
        cout << "\nThe sum of the given numbers is: " << z << ".\n\n";
}

int main ()
{    
        do {
        getNum();
        float sum = add(numOne, numTwo);     
        outSum(sum);
        } while (numOne != 0 && numTwo != 0);
        cout << "\nProgram ended by the user.";
        
    return 0;
}

