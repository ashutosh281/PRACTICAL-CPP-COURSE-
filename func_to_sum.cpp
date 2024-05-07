//Write a C++ function called addition that takes two integers as parameters and returns their sum.


#include<iostream>
using namespace std;

int add(int a, int b){// Function to add two integers and return their sum
    int c;
    c=a+b;
   return c; 
}

int main(){
    int x,y;
// Input values for x and y
    cout<<"enter thr value of x to add---->";
    cin>>x;
    cout<<"enter the vlaue of y to add--->";
    cin>>y;
// Call the add function to get the sum of x and y
 int sum = add(x,y);
// Output the sum
 cout<<"sum of x and y is"<<sum<<endl;


  return 0;
}