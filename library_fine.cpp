#include<iostream>
using namespace std;

int main(){
    int fine,day;
    cout<<"enter the number of days";
    cin>>day;

    switch(day){
        case 1:
       cout<<"day is in between 25 days"<<endl;
       break;

       case 2:
       cout<<"book is not issued"<<endl;
       break;

       default:
       if(day>25){
        fine= (day-25)*2;
        cout<<"fine is "<<fine<<endl;
       }
   }
return 0;
}