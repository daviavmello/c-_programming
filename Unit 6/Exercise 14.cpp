// Write a C++ function, smallestIndex, that takes as parameters an int array and its size and returns the index of the first occurrence of the smallest element in the array. To test your function, write a main that prompts a user for a list of 15 integers and outputs the index and value of the first occurrence of the smallest value.

// An example of the program is shown below:

// Enter 15 integers: 
// 1
// 2
// 3
// 4
// 5
// 6
// 7
// 8
// 9
// 0
// 10
// 11
// 12
// 13
// 14
// 1 2 3 4 5 6 7 8 9 0 10 11 12 13 14 
// The position of the first occurrence of the smallest element in list is: 9
// The smallest element in list is: 0

#include <iostream>

using namespace std;

int smallestIndex(int numberArray[], int arraySize);

int main()
{
    const int MAX_ARRAY_SIZE = 15;
    
    int firstArray[MAX_ARRAY_SIZE] = {56, 34, 67, 54, 56, 87, 66, 92, 15, 32, 55, 54, 88, 92, 30};
    int secondArray[MAX_ARRAY_SIZE] = {79, 26, 97, 87, 73, 44, 67, 46, 55, 13, 20, 20, 33, 42, 60};
    int thirdArray[MAX_ARRAY_SIZE] = {63, 1, 40, 81, 30, 11, 26, 44, 98, 1, 80, 98, 15, 3, 42};
    
    int smallestPositionFirst = smallestIndex(firstArray, MAX_ARRAY_SIZE);
    int smallestPositionSecond = smallestIndex(secondArray, MAX_ARRAY_SIZE);
    int smallestPositionThird = smallestIndex(secondArray, MAX_ARRAY_SIZE);
    
    cout << "The position of the first occurrence of the smallest element in list is: " << smallestPositionFirst << endl;
    cout << " The smallest element in list is: " << firstArray[smallestPositionFirst] << endl;
    cout << "____________________________________" << endl << endl;
    cout << "The position of the first occurrence of the smallest element in list is: " << smallestPositionSecond << endl;
    cout << " The smallest element in list is: " << secondArray[smallestPositionSecond] << endl;
    cout << "____________________________________" << endl << endl;
    cout << "The position of the first occurrence of the smallest element in list is: " << smallestPositionThird << endl;
    cout << " The smallest element in list is: " << thirdArray[smallestPositionThird] << endl;
    return 0;
}

int smallestIndex(int numberArray[], int arraySize) {
    int smallest = 0;
    for (int i = 0; i < arraySize-1; i++) {
        if (numberArray[i] < numberArray[smallest])
            smallest = i;
    }
    return smallest;
}
