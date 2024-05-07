#include<iostream>
using namespace std;


int main()
{
    int age;
    cout<< "Enter the age of people:="<<endl;
      cin >> age;
   

if (age>=0  &&  age>=2)
{
    cout<<"is infant peoples \n";
}
else if (age>=3  &&  age>=5)
{
    cout<<"is toddler peoples \n";
}
else if (age>=6  &&  age>=12)
{
    cout<<"is child \n";
}
else if (age>=13  &&  age>=19)
{
    cout<<"is teenager \n";
}
else if (age>=20)
{
    cout<<"are adults \n";
}
else{
    cout<<"all are wrong \n";
}

return 0;
}