// Write a C++ statement that outputs the values of name and studyHours with the appropriate text. For example, if the value of name is "Donald" and the value of studyHours is 4.5, the output is:

//include statement(s)
#include <iostream>
#include <string>

//using namespace statement
using namespace std;

int main()
{
//variable declaration
string name;
double studyHours;

//executable statements
cout << "What's your name? " << name;
cin >> name;
cout << "How many hours did you study this week? " << studyHours;
cin >> studyHours;
cout << "Hello, " << name << "!" << " On Saturday, you need to study " << studyHours << " hours for the exam.";
    
//return statement
return 0;
}
