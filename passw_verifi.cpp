#include<iostream>
using namespace std;

int main(){/*variable's value cannot be changed after initialization*[cons]*/
    const  string predefinedPassword = "Titanium22@";//string: It is a data type in C++ that represents a sequence of characters. 

    //take the user input for password
    cout<<"enter the new password for verification = ";
string userPassword;
cin>>userPassword;

if(userPassword == predefinedPassword)
{
    cout<<"Access Granted"<<endl;
}
else
{
    cout<<"Denied Granted"<<endl;
}

return 0;
}

