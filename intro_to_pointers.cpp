#include<iostream>
using namespace std;
int main(){
    int num = 5;
    int *p=&num;
    cout<<"num"<<endl;

    //find the address of operator which denoted by (&)

    cout<<"the address of operatoe is"<<&num<<endl;
    
    //dereference operator
    cout<<"address par jo value padi ha "<<*p<<endl;
cout<<"address print ho jayaga "<<p<<endl;
    return 0;


}
