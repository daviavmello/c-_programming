// During the tax season, every Friday, the J&J accounting firm provides assistance to people who prepare their own tax returns. Their charges are as follows:

// If a person has low income (<= 25,000) and the consulting time is less than or equal to 30 minutes, there are no charges; otherwise, the service charges are 40% of the regular hourly rate for the time over 30 minutes.
// For others, if the consulting time is less than or equal to 20 minutes, there are no service charges; otherwise, service charges are 70% of the regular hourly rate for the time over 20 minutes. (For example, suppose that a person has low income and spent 1 hour and 15 minutes, and the hourly rate is $70.00. Then the billing amount is 70.00 X.40 X (45/60) = $21.00.)
// Instructions
// Write a program that prompts the user to enter yearly income, the hourly rate, the total consulting time. The program should output the billing amount. Your program must contain a function that takes as input the hourly rate, the total consulting time, and a value indicating whether the person has low income. The function should return the billing amount. Your program may prompt the user to enter the consulting time in minutes.

#include <iostream>
#include <iomanip>

using namespace std;

double income, hourlyRate, consultingTime, price;

void lowIncome () {
    if (consultingTime <= 30) {
    cout << "You've got this service at not cost, my friend.";
    }
        
    else if (consultingTime > 30) {
    consultingTime = consultingTime - 30;
    price = 0.4 * hourlyRate * (consultingTime / 60);
    cout << "Your total price is $" << price;    
    }
}

void highIncome () {
    if (consultingTime <= 20) {
    cout << "You've got this service at not cost, my friend.";
    }
    else if (consultingTime > 20) {
    consultingTime = consultingTime - 20;
    price = 0.7 * hourlyRate * (consultingTime / 60);
    cout << "Your total price is $" << price;
    }
}

int main() {
    cout << "Enter your yearly income:" << "\n";
    cin >> income;
    
    cout << "What's the hourly rate?" << "\n";
    cin >> hourlyRate;
    
    cout << "How long is the consulting time (in minutes)?" << "\n";
    cin >> consultingTime;

    if (income <= 25000) {
    cout << fixed << showpoint;
    cout << setprecision(2);
    lowIncome();
    }
    
    else if (income > 25000) {
    cout << fixed << showpoint;
    cout << setprecision(2);
    highIncome();
    }
    return 0;
}