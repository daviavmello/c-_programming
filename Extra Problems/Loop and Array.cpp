// Write a program using loop and array that asks user to input 10 numbers, then calculates the average of those numbers.

#include <iostream>

using namespace std;

int main()
{
    int i;
    int n = 10;
    float num[10], sum = 0.0, average;
    cout << "Enter the numbers below:\n";
    
    for(i = 0; i < n; i++) {
        cout << i + 1 << ". Enter number: ";
        cin >> num[i];
        sum += num[i];
    }
    
    average = sum / n;
    cout << "Average = " << average;
    return 0;
}