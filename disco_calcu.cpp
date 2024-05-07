#include<iostream>
using namespace std;

int main() {
    int finalprice, age, price_of_item;
    int discountpercentage = 10;

    cout << "Enter the age-------> ";
    cin >> age;

    cout << "Enter the price of item:------> ";
    cin >> price_of_item;

    if (age >= 60) {
        cout << "Senior citizen eligible for a 10 percent discount on the item." << endl;
        finalprice = price_of_item - (price_of_item * discountpercentage / 100);
    } 
    else {
        finalprice = price_of_item;
        cout<<"person is not eligible for discount \n";
    }

    cout << "Final price: " << finalprice << endl;

    return 0;
}
