// **********************SWAP VALUES OF A AND B using call by reference(function)***************

#include<iostream>
using namespace std;

void swapPointer(int* a,int* b){
int temp = *a;
*a = *b;
*b = temp;
}

int main(){
    int x = 4, y = 6;
    cout<<"the value of x is ---------->"<<x<<"the value of y is ------->"<<y<<endl;
    swapPointer(&x,&y);
    cout<<"the value of x is after swapping---------> "<<x<<"the value of y is after swapping---------->"<<y<<endl;
    return 0;
}