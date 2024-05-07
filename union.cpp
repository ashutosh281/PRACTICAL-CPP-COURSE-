//is a special data type thats allows storing of different data type in the same memory locaiton

#include<iostream>
using namespace std;

union Data{
    int intvalue;
    float floatvalue;
    char stringvalue[10];
};

int main(){
    Data data;

   data.intvalue;
   cout<<"enter the value of intvalue : ";
   cin>>data.intvalue;
   cout<<"entered value"<<data.intvalue<<endl;

   data.floatvalue;
   cout<<"enter the value of floatvalue : ";
   cin>>data.floatvalue;
   cout<<"entered value"<<data.floatvalue<<endl;

data.stringvalue;
   cout<<"enter the value of stringvalue : ";
   cin>>data.stringvalue;
   cout<<"entered value"<<data.stringvalue<<endl;
return 0;
}