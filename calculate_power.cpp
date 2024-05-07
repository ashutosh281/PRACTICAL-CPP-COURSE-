//*****************************calculate power using while and for loop******************************
#include<iostream>
using namespace std;

int main(){
    int x,y,product=1;
    cout<<"enter the value of x and y-------------->";
    cin>>x>>y;
   /* while(y>0){
        product=product*x;
        y--;
    }*/
//*************************for loop**********************
    for(;y>0;y--)
        product=product*x;

    
    cout<<"final power-------->"<<product<<endl;
    return 0;
}