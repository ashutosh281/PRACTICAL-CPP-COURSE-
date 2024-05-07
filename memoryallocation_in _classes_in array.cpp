/*he way memory is allocated to variables and functions of the class
is different even though they both are from the same class.

The memory is only allocated to the variables of the class when the object is created.
The memory is not allocated to the variables when the class is declared. At the same time,
single variables can have different values for different objects, so every object has an individual copy
 of all the variables of the class. But the memory is allocated to the function only once when the class is
  declared.
So the objects don’t have individual copies of functions only one copy is shared among each object.*/

#include <iostream>
#include <string>
using namespace std;

class shop
{
    int item_ID[100];
    int item_price[100];
    int counter;

public:
    void intialise_counter() { counter = 0; }
    void set_price(void);
    void disply_price(void);
};

void shop::set_price(void)
{
    cout << "enter the id of your item  =  " << counter + 1 << endl;
    cin >> item_ID[counter];

    cout << "enter the price of your item  =  ";
    cin >> item_price[counter];
    counter++;
}

void shop::disply_price(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "the price of item with id" << item_ID[i] << "is" << item_price[i] << endl;
    }
}

int main()
{
    shop dukaan;
    dukaan.intialise_counter();
    dukaan.set_price();
    dukaan.set_price();
    dukaan.set_price();
    dukaan.set_price();
    dukaan.set_price();
    dukaan.set_price();
    dukaan.set_price();
    dukaan.set_price();
    dukaan.set_price();
    dukaan.set_price();
    dukaan.disply_price();
    return 0;
}