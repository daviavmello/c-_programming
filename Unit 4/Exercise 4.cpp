// A box of cookies can hold 24 cookies, and a container can hold 75 boxes of cookies.

// Write a program that prompts the user to enter:

// The total number of cookies
// The program then outputs:

// The number of boxes and the number of containers to ship the cookies.
// Note that each box must contain the specified number of cookies, and each container must contain the specified number of boxes. If the last box of cookies contains less than the number of specified cookies, you can discard it and output the number of leftover cookies.

// Similarly, if the last container contains less than the number of specified boxes, you can discard it and output the number of leftover boxes.

#include <iostream>
using namespace std;

int main()
{
    int cookies, leftover, nOfBoxes, nOfContainers, leftoverBoxes;
    int box = 24;
    int container = 75;
    
    cout << "How many cookies would you like to purchase?" << "\n";
    cin >> cookies;
    
    nOfBoxes = cookies / box;
    leftover = cookies % box;
    leftoverBoxes = nOfBoxes / container;
    nOfContainers = nOfBoxes % container;
    
    cout << "The number of boxes is: " << nOfBoxes << "\n";
    cout << "The number of leftover cookies is: " << leftover << "\n";
    cout << "The number of leftover boxes is: " << leftoverBoxes << "\n";
    cout << "The number of containers is: " << nOfContainers;
    
    return 0;
}

