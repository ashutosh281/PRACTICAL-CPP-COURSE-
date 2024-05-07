#include<iostream>
using namespace std;
int c = 78;
int main()

{
    int a,b,c;
    
    cout<<"enter the value of a \n";
    cin>>a;
    cout<<"enter the value of b \n";
    cin>>b;
    
c = a + b;
cout<<"the sum of a and b is"<<c<<endl;
cout<<"the gloabal c is"<<::c;
    return 0;

}