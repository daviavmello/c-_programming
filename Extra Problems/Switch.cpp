// Write a program that inputs one character, then display “yes” if the character is ‘y’ , display “no” if the character is ‘n’, displays “menu” if the character is ‘m’, display “exit” if the character is not ‘y’, ‘n’, or ‘m’. Implement this program by a Switch statement.

#include <iostream>

using namespace std;

int main()
{
	char character;

	cout << "Type in a letter: ";
	cin >> character;

	switch (character)
	{
	case 'y':
		cout << "yes";
		break;
	
	case 'n':
		cout << "no";
		break;	
	
	case 'm':
		cout << "menu";
		break;

	default:
		cout << "exit";
	}
}