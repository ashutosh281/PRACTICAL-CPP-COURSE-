#include<iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter the numbers:A ";
    cin >> a ;
    cout<<"Enter the number:B";
    cin>>b;
    cout<<"Enter the number:C";
    cin>>c;

    if (a >= b && b >= c) {
        cout << "a is greater than or equal to b, and b is greater than or equal to c" << endl;
    } else if (a >= b && b <= c) {
        cout << "a is greater than or equal to b, but b is not greater than or equal to c" << endl;
    } else {
        cout << "all are wrong" << endl;
    }

    return 0;
}
