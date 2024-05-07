//*************************AMSTRONG NUMBER******************
#include<iostream>
using namespace std;



int main(){
    int original_Number, sum = 0, remainder, cube, save;
    cout << "Enter the number: ";
    cin >> original_Number;

    save = original_Number;

    for(original_Number; original_Number > 0; original_Number = original_Number / 10){
        remainder = original_Number % 10; // Find remainder
        cube = remainder * remainder * remainder; // Find the cube of remainder
        sum += cube;
    }
    
    if (save == sum){
        cout << "The number is an Armstrong number: " << sum << endl;
    } else {
        cout << "The number is not an Armstrong number" << endl;
    }

    return 0;
}
