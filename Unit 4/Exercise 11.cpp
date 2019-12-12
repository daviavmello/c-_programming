// Write a program that implements the algorithm given in Example 1 - 3 (Chapter 1), which determines the monthly wages of a salesperson. The instructions for Example 1 - 3 have been posted below for your convenience.

// Example 1 - 3
// Every salesperson has a base salary. The salesperson also receives a bonus at the end of each month, based on the following criteria: If the salesperson has been with the store for five years or less, the bonus is $10 for each year that he or she has worked there. If the salesperson has been with the store for more than five years, the bonus is $20 for each year that he or she has worked there. The salesperson can earn an additional bonus as follows: If the total sales made by the salesperson for the month are at least $5,000 but less than $10,000, he or she receives a 3% commission on the sale. If the total sales made by the salesperson for the month are at least $10,000, he or she receives a 6% commission on the sale.

// To calculate a salesperson’s monthly paycheck, you need to know the base salary, the number of years that the salesperson has been with the company, and the total sales made by the salesperson for that month. Suppose baseSalary denotes the base salary,noOfServiceYears denotes the number of years that the salesperson has been with the store,bonus denotes the bonus, totalSales denotes the total sales made by the salesperson for the month, and additionalBonus denotes the additional bonus.

// Since your program handles currency, make sure to use a data type that can store decimals with a precision to 2 decimals.

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    
    int noOfServiceYears, bonus;
    double baseSalary, totalSales, paycheck, additionalBonus;
        
    cout << "Please enter your base salary below:" << "\n";
    cout << "$";
    cin >> baseSalary;
    cout << fixed << showpoint << setprecision(2) << "\n";
    
    cout << "Please type in the number of years you have been working for the company:" << "\n";
    cin >> noOfServiceYears;
    cout << "\n";
    
    if (noOfServiceYears <= 5) {
      bonus = 10 * noOfServiceYears;
    }
    
    else {
      bonus = 20 * noOfServiceYears; 
    }
    
    cout << "Your bonus is: " << bonus << "\n""\n";
    
    cout << "Please enter your total sales for the month:" << "\n""\n";
    cin >> totalSales;
    
    if (totalSales >= 5000 && totalSales < 10000) {
      additionalBonus = 0.03 * totalSales;
    }
    
    else if (totalSales >= 10000) {
      additionalBonus = 0.06 * totalSales;
    }
    
    paycheck = baseSalary + bonus + additionalBonus;

    cout << "Your total paycheck is: " << paycheck << "\n";
    
    return 0;
}