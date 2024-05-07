#include<iostream>
#include<string>
using namespace std;

class student{
    int roll_no;
    string name;
    string address;
    double fees;
    int mobile_number;
    string which_year;

public:
//constructor is in the class

student(){
    cout<<"Enter the roll number"<<endl;
    cin>>roll_no;

    cout<<"ENter the name"<<endl;
    cin>>name;

    cout<<"Enter the address"<<endl;
    cin.ignore(); // Add this to clear the buffer
        getline(cin, address); // Using getline for address

    cout<<"enter your course fees"<<endl;
    cin>>fees;

    cout<<"Enter your mobile number"<<endl;
    cin>>mobile_number;

    cout<<"enter in which year you are study( 1st / 2nd / 3rd / 4th)"<<endl;
    cin>>which_year;
}

void dsiplay(){
    cout<<"\nRoll Number : "<<roll_no;
    cout<<"\nName : "<<name;
    cout<<"\naddress : "<<address;
    cout<<"\nfees : "<<fees;
    cout<<"\nmobile_number : "<<mobile_number;
    cout<<"\nwhich year you are study( 1st / 2nd / 3rd / 4th) : "<<which_year;
    }

};
    
    int main(){
        student s;//constructor gets called automatically when we created the object of class
        s.dsiplay();//function call to display all details of a student
    
    return 0;
    }
