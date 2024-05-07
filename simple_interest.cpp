#include<iostream>
using namespace std;

int main(){
    double principalAmount,rate_of_interest,time_period,simple_interest;//for storing values like 3.1234
int choice;

    cout<<"main menu for simple_interest\n";
    cout<<"1.calculate simple interest\n";
    cout<<"2. exit\n";
    cout<<"enter your choioce------>";
    cin>>choice;

    switch(choice){
        case 1:
        cout<<"enter the principalAmount\n";
        cin>>principalAmount;
        
        cout<<"enter the rate_of_interest\n";
        cin>>rate_of_interest;

          char unit;  /*char is a data type used to store a single character. 
          When you declare a variable char unit;, you're creating a variable named unit that can hold one character.*/
            cout << "Enter the time period (M for months, Y for years): ";
            cin >> unit;

            cout << "Enter the time value: ";
            cin >> time_period;

            if(unit == 'M' || unit == 'm') {
                // Convert months to years (assuming 12 months in a year)
                time_period /= 12;
            }

        simple_interest = (principalAmount*rate_of_interest*time_period)/100;
        cout<<"simple_interest------>"<<simple_interest<<endl;
        break;

        case 2:
        cout<<"exit the program\n";
        break;

        default:
        cout<<"entered choice is wrong\n";
        break;
    }
    return 0;
}