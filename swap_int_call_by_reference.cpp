///Write a program in a programming language of your choice to swap two integers using a function.
// Explain how call by reference works in this context.

#include<iostream>
using namespace std;
//Using references (&) in the function declaration makes the function call and usage simpler and more readable.
// It clearly indicates that the function is working with the original variables rather than pointers to variables.
//References provide a safer way to work with variables compared to pointers, as they cannot be null and don't require explicit memory 
//management.
void swap(int &x,int &y){//where we also use (int *x,int *y) but   With pointers (int* x, int* y), you would need to 
//dereference them every time you access or modify the values they point toadding complexity and potential for errors.
int temp = x;// store the value of x in a temporary variable
    x = y;//assign a value of y to x
  }  y = temp;// Assign the value of the temporary variable (initial value of x) to y

int main(){
    int a,b;
    cout<<"Enter the value of a--->";
    cin>>a;
    cout<<"Enter the value of b--->";
    cin>>b;

  cout<<"the value of a before swap is--->"<<a<<"the value of b after swap--->"<<b<<endl;
  swap(a,b);  // Call the swap function passing the values of a and b by reference

  cout<<"value of a is after swaping--->"<<a<<"value of b after swapping--->"<<b<<endl;
  return 0;
}