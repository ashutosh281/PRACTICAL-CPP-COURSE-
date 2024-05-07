/*        
Call by Value:

Write a program in a programming language of your choice to swap two integers using a function.
 Explain how call by value works in this context.                         */



// Function to swap two integers using call by value
#include <iostream>
using namespace std;

// Function to swap two integers using call by value

int main() {
    int a, b;
    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;

    cout << "Before swap: a = " << a << ", b = " << b << endl;
    
    // Call the swap function passing the values of a and b by value
    swap(a, b);

    cout << "After swap: a = " << a << ", b = " << b << endl;
    return 0;
}
void swap(int x, int y) {
    int temp = x; // Store the value of x in a temporary variable
    x = y;        // Assign the value of y to x
    y = temp;     // Assign the value of the temporary variable (initial value of x) to y
    cout << "Inside swap function: a = " << x << ", b = " << y << endl;
}
