// Redo Programming Exercise 14 by first sorting the array before determining the array elements that are the sum of two other elements. Use a selection sort algorithm, discussed in this chapter to sort the array.

// Instructions and code for Programming Exercise 14 have been included for your convenience.

// Exercise 14
// Write a program that prompts the user to enter 50 integers and stores them in an array. The program then determines and outputs which numbers in the array are sum of two other array elements. If an array element is the sum of two other array elements, then for this array element, the program should output all such pairs.

#include <iostream>

using namespace std;

const int LIST_SIZE = 50;

void selectionSort(int list[], int length);

int main()
{
    int list[50];

    cout << "Enter " << LIST_SIZE << " integers: ";
    for (int i = 0; i < LIST_SIZE; i++)
        cin >> list[i];
    cout << endl;

    selectionSort(list, LIST_SIZE);

    for (int i = 0; i < LIST_SIZE; i++)
    {
        cout << "list[" << i << "] = " << list[i] << " is the sum of: ";
        for (int j = 0; j < LIST_SIZE; j++)
            for (int k = j + 1; k < LIST_SIZE; k++)
                if (list[i] == list[j] + list[k])
                    cout << "list[" << j << "], list[" << k << "]; ";
        cout << endl;
        cout << "----------------------" << endl;;
    }

    return 0;
}

void selectionSort(int list[], int length)
{
    int index;
    int smallestIndex;
    int location;
    int temp;

    for (index = 0; index < length - 1; index++)
    {
        //Step a
        smallestIndex = index;

        for (location = index + 1; location < length; location++)
            if (list[location] < list[smallestIndex])
                smallestIndex = location;

        //Step b
        temp = list[smallestIndex];
        list[smallestIndex] = list[index];
        list[index] = temp;
    }
}
