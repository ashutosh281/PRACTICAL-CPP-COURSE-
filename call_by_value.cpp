#include<iostream>
using namespace std;

void increment(int x){//function to increment a value passed by value  parameter-->x
    x++; //increment the local copy of x
    cout<<"INSIDE INCREMENT FUNCTION  =  "<<x<<endl;
}

int main(){
    int num=5;
    cout<<"BEFORE INCREMENT FUNCTION  =  "<<num<<endl;
    increment(num);
    cout<<"AFTER INCREMENT FUNCTION =  "<<num<<endl;
    return 0;
}