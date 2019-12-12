// Write a value-returning function, isVowel, that returns the value true if a given character is a vowel and otherwise returns false.

// For the input E, your output should look like the following:

// E is a vowel: 1

#include <iostream>

using namespace std;

char vowel;
char character;

bool isVowel(char vowel) {
    switch (vowel) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            return true;
        default:
            return false;
}
}

int main() {
    
    cout << "Enter a vowel: ";
    cin >> character;
    
    if (isVowel(character)) 
        cout << character << " is a vowel";
    else 
        cout << character << " is not a vowel";
}


