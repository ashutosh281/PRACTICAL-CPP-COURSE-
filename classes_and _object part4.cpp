//oops 1
//objects and classes in c++
/*#include<iostream>
#include<string>

using namespace std;

class cars{
    public:
    string brand;
    int year;
    int speed;
    string color;
    string modified;

    void which_brand(){
        cout<<"the car is a == "<<brand<<endl;

    }

    void which_year(){
        cout<<"the car was made in which year =  "<<year<<endl;
    }

    void speed_of_car(){
        cout<<"the speed of car =  "<<speed<<endl;
    }

    void color_of_car(){
        cout<<"color of car = "<<color<<endl;

    }

    void modified_car(){
        cout<<"car is modified or not = "<<modified<<endl;
    }

};

int main(){
    //syntax of object is classname_and the name that you want for object
  cars mycar; //creating object for car classes
  cars wanted_car;//creating object for car classes


mycar.brand = "lexus";
mycar.color = "white";
mycar.speed = 360;
mycar.year = 2019;
mycar.modified = "NO";

wanted_car.brand = "tyota(suprs)";
wanted_car.color = "black";
wanted_car.speed = 400;
wanted_car.year = 2015;
wanted_car.modified = "yes";


mycar.which_brand();
mycar.color_of_car();
mycar.speed_of_car();
mycar.which_year();
mycar.modified_car();

wanted_car.which_brand();
wanted_car.color_of_car();
wanted_car.speed_of_car();
wanted_car.which_year();
wanted_car.modified_car();


return 0;

}*/

#include <iostream>
#include <string>

using namespace std;

// Define the Cars class
class Cars {
private: // Encapsulation: Data members are private, accessible only within the class
    string brand;
    int year;
    int speed;
    string color;
    string modified;

public: // Public methods to access and manipulate data
    // Constructor to initialize the object
    Cars(string brand, int year, int speed, string color, string modified) {
        this->brand = brand;
        this->year = year;
        this->speed = speed;
        this->color = color;
        this->modified = modified;
    }

    // Method to display the brand of the car
    void displayBrand() {
        cout << "The car is a " << brand << endl;
    }

    // Method to display the year of the car
    void displayYear() {
        cout << "The car was made in " << year << endl;
    }

    // Method to display the speed of the car
    void displaySpeed() {
        cout << "The speed of the car is " << speed << " mph" << endl;
    }

    // Method to display the color of the car
    void displayColor() {
        cout << "The color of the car is " << color << endl;
    }

    // Method to display if the car is modified or not
    void displayModified() {
        cout << "Car is modified: " << modified << endl;
    }
};

int main() {
    // Variables to store user input
    string brand, color, modified;
    int year, speed;

    // Prompt user for myCar details
    cout << "Enter details for your car:" << endl;
    cout << "Brand: ";
    getline(cin, brand); // Take brand input

    cout << "Year: ";
    cin >> year; // Take year input

    cout << "Speed: ";
    cin >> speed; // Take speed input

    cin.ignore(); // Ignore the newline character in the input buffer

    cout << "Color: ";
    getline(cin, color); // Take color input

    cout << "Is your car modified? (Yes/No): ";
    getline(cin, modified); // Take modified input

    // Create myCar object with user input
    Cars myCar(brand, year, speed, color, modified);

    // Prompt user for wantedCar details
    cout << "\nEnter details for the wanted car:" << endl;
    cout << "Brand: ";
    getline(cin, brand); // Take brand input

    cout << "Year: ";
    cin >> year; // Take year input

    cout << "Speed: ";
    cin >> speed; // Take speed input

    cin.ignore(); // Ignore the newline character in the input buffer

    cout << "Color: ";
    getline(cin, color); // Take color input

    cout << "Is the wanted car modified? (Yes/No): ";
    getline(cin, modified); // Take modified input

    // Create wantedCar object with user input
    Cars wantedCar(brand, year, speed, color, modified);

    // Display information about myCar
    cout << "\nYour Car Details:" << endl;
    myCar.displayBrand();
    myCar.displayYear();
    myCar.displaySpeed();
    myCar.displayColor();
    myCar.displayModified();

    // Display information about wantedCar
    cout << "\nWanted Car Details:" << endl;
    wantedCar.displayBrand();
    wantedCar.displayYear();
    wantedCar.displaySpeed();
    wantedCar.displayColor();
    wantedCar.displayModified();

    return 0;
}
//We prompt the user to enter details for their car and the wanted car.
//For each detail (brand, year, speed, color, modified), we use getline() to read a line of input from the user.
//For year and speed, we use cin to read integer input.
//After reading integer input, we need to clear the newline character from the input buffer, so we use cin.ignore() for this purpose./
//Finally, we create Cars objects (myCar and wantedCar) with the user-provided details.