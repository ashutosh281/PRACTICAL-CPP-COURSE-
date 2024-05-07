//*****************************palindrome number using while and for loop*****************
#include<iostream>
using namespace std;

int main(){
    int i ,original,reverse=0;
    cout<<"enter a number------------>";
    cin>>i;
    original=i;

   /*while(i>0){
        reverse=(reverse*10)+i%10;
        i=i/10;
    }
    if(original==reverse){
        cout<<"entred number is palindrome \n";

    }
    else
    cout<<"entered number is not palindrome\n";*/
    for(;i>0;i=i/10){
        reverse=(reverse*10)+i%10;//use for reverse the number
    

    }
    if(original==reverse){
        cout<<"entered number is palindrome \n";
    }
    else
    cout<<"entered number is not a palindrome number \n";

    return 0;
}
