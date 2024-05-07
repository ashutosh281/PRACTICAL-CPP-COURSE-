//Define a function named multiply that takes two floating-point numbers as parameters and returns their product.

#include<iostream>
using namespace std;

float multiply(float a, float b){
    float c;
    c = a * b;
    return c;
}

int main(){
    float x,y;
    //take user input of x and y
    cout<<"Enter the value of x--->";
    cin>>x;
    cout<<"Enter the value of y--->";
    cin>>y;

    float product = multiply(x,y);

    cout<<"product of value x and y"<<product<<endl;

    return 0;
}
