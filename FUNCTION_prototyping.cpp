#include<iostream>
using namespace std;

//function prototying is function can be declare befor its actual implementation
int sum(int a,int b);
void g(void);//na ye kuch lega aur na ye kuch dega because its a void function
int main(){
    int num1,num2;
    cout<<"Enter the num1 value"<<endl;
    cin>>num1;
    cout<<"Enter the num2 value"<<endl;//num1 and num2 are the actual parameters that are passed to a function when its called
    cin>>num2;
    cout<<"sum is"<<sum(num1,num2)<<endl;
    
    //calling void function
    g();
    return 0;
}

int sum(int a,int b){//a and  b are the formal parameters its taking values from actual parameters like num1 and num2
    int c=a+b;
    return c;
}
void g(){
    cout<<"hello good morning "<<endl;
   
}