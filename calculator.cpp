//*****************************calculator***************************
#include<iostream>
using namespace std;

int main(){
    int num1,num2,result;
    char op;
    cout<<"enter the num1 value------->" ;
    cin>>num1;
    cout<<"enter the num2 value------->";
    cin>>num2;
    cout<<"enter the operator(+,-,/,*)------------>";
    cin>>op;

    switch(op){
        case '+':
        
        result=num1+num2;
        cout << "Result: " << result << endl;
        break;

         case '-':
        
        result=num1-num2;
         cout << "Result: " << result << endl;
        break;

         case '*':
        
        result=num1*num2;
         cout << "Result: " << result << endl;
        break;


         case '/':
        
        if(num2!=0)
        {  result=num1/num2;
             cout << "Result: " << result << endl;
        }
        else{

        }
         
        break;


        default:
        cout<<"not best result---->"<<endl;
        break;
        
    }
return 0;

}