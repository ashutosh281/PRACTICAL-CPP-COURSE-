//*****write a program of factorial using recursion
//  factorial = n*(n-1)!

#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n <= 1)
        return 1;

    else
        return n * factorial(n - 1);
}

int main()
{
    int x;
    cout << "Enter the value of x to find the factorial   =  ";
    cin >> x;

    cout << "the value of x is to find the factorial is  =  " << x << "factorial is  =  " << factorial(x) << endl;

    return 0;
}
