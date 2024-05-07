#include<iostream>
using namespace std;

int main() {
    int number, reminder, reverse_number = 0;
    cout << "Enter the integer: ";
    cin >> number;

    while (number > 0) {
        reminder = number % 10; // Extract the last digit
        reverse_number = (reverse_number * 10) + reminder; // Append the digit to the reversed number
        number = number / 10; // Remove the last digit from the original number
    }

    cout << "Reversed number: " << reverse_number << endl;
   
    return 0;
}

