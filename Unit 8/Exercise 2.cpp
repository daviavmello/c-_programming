// Write a program that prompts the user to input a string and outputs the string in uppercase letters. (Use a character array to store the string.)

#include <iostream>
#include <cctype>

using namespace std;

int main()
{
	int input;
	char *name;
	name = new char [20];
	cout << "Enter a name: " << endl;
	cin.get(name,20);
	for(int i = 0; i < 20; i++)
		cout << static_cast<char>(toupper(name[i]));
	cout << endl;
	cin >> input; 
	return 0;
}