// calculate the volume of cylinder(pie r^2 h),cube(a^3) and rectangular box(l*b*h)

#include <iostream>
using namespace std;

// volume of cylinder
int volume(int radius, int height)
{
    return (3.14 * radius * radius * height);
}
// volume of cube
int volume(int a)
{
    return a * a * a;
}
// volume of rectangular box
int volume(int length, int breadth, int height)
{
    return length * breadth * height;
}

int main()
{
    int a, radius, height, length, breadth;
    cout << " \nenter the value of a = ";
    cin >> a;
    cout << "\nenter the value of radius = ";
    cin >> radius;
    cout << "\nenter the value of length = ";
    cin >> breadth;
    cout << "\nenter the value of breadth = ";
    cin >> length;
    cout << "\nenter the value of height = ";
    cin >> height;

    cout << "volume of cylinder is  =  " << volume(radius, height) << endl;
    cout << "volume of cube is  =  " << volume(a) << endl;
    cout << "volume of rectangular box is  =  " << volume(length, breadth, height) << endl;

    return 0;
}