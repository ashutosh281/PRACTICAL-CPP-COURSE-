// Create a function isEven that takes an integer as a parameter and returns true if the number is even and false otherwise
#include <iostream>
using namespace std;

bool even(int number)
{
    return number % 2 == 0; // % operator gives the remainder of the division, so if the remainder is 0, the number is even.
}

int main()
{
    int x, y;
    cout << "enter the value of x = ";
    cin >> x;
    cout << "enter the value of y = ";
    cin >> y;

    bool x_is_even = even(x);
    bool y_is_even = even(y);

    cout << "Is x even ? answer is = ";
    if (x_is_even)
        cout << "true" << endl;

    else
        cout << "false" << endl;

    cout << "Y is even ? answer is = ";
    if (y_is_even)
        cout << "true" << endl;

    else
        cout << "false" << endl;

    return 0;
}