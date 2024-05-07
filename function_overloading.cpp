#include<iostream>
using namespace std;

int add(int a,int b){
    cout<<"print they using 2 arguments which is(a,b)";// for checking a this are not using twice
    return a+b;
}

int add(int a,int b,int c){
    cout<<"print they using 3 arguments which is(int a,int b,int c)";//for checking are not using twice or thrice
    return a+b+c;
}

int main(){
    int a,b,c;
    cout<<"Enter the value of a and b,c  =  ";
    cin>>a>>b>>c;
    cout<<"the final value of a and b (addition) is  = "<<add(a,b)<<endl;
    cout<<"the final value of a , b and c (addition) is  =  "<<add(a,b,c)<<endl;

    return 0;
}