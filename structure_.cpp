//is a userdefined data type that allows you to group together variables pf different datatypes under a single name

#include<iostream>
using namespace std;

struct person{
    string name;
    int age;
    float height;
};

int main(){
    person person1;
    person person2;

person1.name = "ashutosh";
person1.age = 19;
person1.height = 5.7;

cout<<"name of perseon"<<person1.name<<endl;
cout<<"age of perseon"<<person1.age<<endl;
cout<<"height of perseon"<<person1.height<<endl;

person2.name = "kartikey";
person2.age = 18;
person2.height = 5.10;

cout<<"name of perseon"<<person2.name<<endl;
cout<<"age of perseon"<<person2.age<<endl;
cout<<"height of perseon"<<person2.height<<endl;

return 0;
}