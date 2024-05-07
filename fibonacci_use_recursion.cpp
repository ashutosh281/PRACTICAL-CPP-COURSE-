// fibonacci using recursive function

#include<iostream>
using namespace std;

int fibonacci(int n){
    if(n<2)
    return 1;

    else
    return (fibonacci(n-1)+fibonacci(n-2));
}

int main(){
    int x;
    cout<<"Enter the value of x  =  ";
    cin>>x;
    cout<<"the term in fibonacci sequence st position = "<<x<<"  is = "<<fibonacci(x)<<endl;


    return 0;
}