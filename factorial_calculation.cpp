#include <iostream>
using namespace std;
int main()
{
    int fact = 1, n; // Initialize fact to 1
    cout << "enter the value of n------------->";
    cin >> n;
    while (n >= 1)
    { // Calculate factorial using a while loop
        fact = fact * n;
        n--;
    }
    cout << "factorial is------------>" << fact << endl; // Output the factorial
}