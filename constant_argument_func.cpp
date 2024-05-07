
// In C++, a constant argument refers to a parameter in a function that cannot be modified within the function.
// This means that the value of the parameter remains constant throughout the execution of the function,
// and any attempt to modify it will result in a compilation error.

#include <iostream>
using namespace std;

void display(const int num)
{
    cout << "value of number" << num << endl; // here we can not modified the value of num because we already make the num asa const
}

int main()
{
    int x = 10;

    display(x);

    return 0;
}