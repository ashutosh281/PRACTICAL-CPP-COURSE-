//*************************SUM_OF_DIGIT************************************* using while loop 
/*Write a program that calculates 
the sum of the digits of a positive integer entered by the user. 
Use a while loop to perform the calculation.*/
#include<iostream>
using namespace std;
int main(){
    int positive_integer,digit,sum=0;
    cout<<"Enter the positive_integer---------------->";
    cin>>positive_integer;

    while(positive_integer!=0){
        digit= positive_integer%10;

    sum=sum+digit;
     positive_integer/=10;
    }
    cout<<"sum of digit------>"<<sum<<endl;
    return 0;
}