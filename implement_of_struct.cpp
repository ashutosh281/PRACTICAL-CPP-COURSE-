#include<iostream>
using namespace std;
/*
struct employee{
    int id;
    char favcharactor;
    float salary;

};*/

typedef struct employee{
int id;
char favcharactor;
float salary;
}ashu;

int main(){
    ashu ashutosh;
    
    ashutosh.id = 17052;
    ashutosh.salary = 2100000;
    ashutosh.favcharactor = 'c';

    cout<<"the value of"<<ashutosh.id<<endl;
     cout<<"the value of"<<ashutosh.salary<<endl;
      cout<<"the value of"<<ashutosh.favcharactor<<endl;
      return 0;
}