//in C++, default arguments work similarly. When you define a function, 
//you can give some of its parameters default values. So, if someone doesn't provide a value for those parameters
//when they call the function, 
//the default value will be used.

#include<iostream>
using namespace std;

int calculatearea(int width=1,int height =1){
    return width * height;

}
int main(){

    //calculate area with specifying the value of width and height
    cout<<"area of rectangle with out specifying value"<<calculatearea()<<endl;

    //specifying width and height of rectangle 
    cout<<"area of rectangle with specifying values"<<calculatearea(3,5)<<endl;

    return 0;
}