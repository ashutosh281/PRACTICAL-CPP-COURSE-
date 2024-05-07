//Calculator with Different Data Types:
//Create a calculator program that can perform addition, subtraction, multiplication, and division on integers, 
//floating-point numbers, and complex numbers using function overloading.

#include<iostream>
#include<complex>
using namespace std;

// Function to perform addition for integers
int addition(int a,int b){
return a+b;
}
// Function to perform addition for floating-point numbers
float addition(float a,float b){
    return a+b;
}
// Function to perform addition for complex numbers
complex<float> addition(complex<float> a,complex<float> b){
    return a+b;
}
// Function to perform substraction for integers
int substraction(int a,int b){
    return a-b;
}
//function to perform substraction for floating point numbers
float substraction(float a,float b){
    return a-b;
}
//funtion to perform substraction for complex numbers
complex<float> substraction(complex<float> a,complex<float> b){
    return a-b;
}
//function to perform multiplication for integers
int multiplication(int a, int b){
    return a*b;
}
//function to perform multiplicaiton for floating point numbers
float multiplicaton(float a,float b){
    return a*b;
}
//function to perform multiplication for complex numbers
complex<float> multiplication(complex<float> a,complex<float> b){
    return a*b;
}
//function to perform division for integers numbers
int division(int a,int b){
    if(b==0)
    cout<<"infinity";

    return a/b;
}
//function to perform division for floating point numbers
float division(float a,float b){
    if(b==0.0f)
    cout<<"output is infinity";

    return a/b;
}
//function to perform division for complex numbers
complex<float> division(complex<float> a,complex<float> b){


    return a/b;
}

int main() {
    // Example usage
    int int1 = 5, int2 = 3;
    float float1 = 5.5f, float2 = 3.3f;
    complex<float> complex1(2.0, 3.0), complex2(1.0, 2.0);

    // Addition
    cout << "Addition:" << endl;
    cout << "int: " << addition(int1, int2) << endl;
    cout << "float: " << addition(float1, float2) << endl;
    cout << "complex: " << addition(complex1,complex2) << endl;

    // Subtraction
    cout << "\nSubtraction:" << endl;
    cout << "int: " << substraction(int1,int2) << endl;
    cout << "float: " << substraction(float1, float2) << endl;
    cout << "complex: " << substraction(complex1, complex2) << endl;

    // Multiplication
    cout << "\nMultiplication:" << endl;
    cout << "int: " << multiplication(int1,int2) << endl;
    cout << "float: " << multiplication(float1, float2) << endl;
    cout << "complex: " << multiplication(complex1, complex2) << endl;

    // Division
    cout << "\nDivision:" << endl;
    cout << "int: " << division(int1, int2) << endl;
    cout << "float: " << division(float1, float2) << endl;
    cout << "complex: " << division(complex1, complex2) << endl;

    return 0;
}