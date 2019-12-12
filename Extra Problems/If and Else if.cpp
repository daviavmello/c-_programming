// The cost of renting a tool is $30 for the first three days, $10 per day for the next 5 days and $6 per day thereafter. If the input is the number of days the tool was rented, compute the cost of renting the tool. 

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int days;

	cout << "How many days would like to rent the tool for? ";
	cin >> days;
	cout << "days";

	cout << fixed << showpoint << setprecision(2);

	double threeDays = days * 30;
	double fiveDays = (days - 3) * 10 + 90;
	double rest = (days - 8) * 6 + 140;

	if (days <= 3) {
		cout << "Your total cost is: " << threeDays;
	}
	else if (days <= 8) {
		cout << "Your total cost is: " << fiveDays;
	}
	else {
		cout << "Your total cost is: " << rest;
	}
}