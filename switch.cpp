#include<iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;

    switch(age) { // added missing closing parenthesis for switch statement
        case 1:
            cout << "You are smaller than 18\n";
            break;
        case 2:
            cout << "You are 18 or older\n"; // corrected the message
            break;
        default:
            cout << "You are 18 or older\n"; // corrected the message
            break;
    }
    return 0;
}
