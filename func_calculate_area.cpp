//Write a function called calculateArea that calculates and returns the area of a rectangle.
// The function should take two parameters: the length and width of the rectangle

/*        ***************LOGIC TO CALCULATE THE AREA OF TRIANGLE********************
function calculateArea(length, width):
    if length < 0 or width < 0:
        return "Invalid input: Length and width must be non-negative."
    else:
        area = length * width
        return a;
        
        */

       #include<iostream>
       using namespace std;

       int calculate_Area(int length, int width){
        int area;
        if(length < 0 && width < 0)
        cout<<"invalid";

        else
        area = length * width;

        return area;
       }

       int main(){
        int x,y;
        cout<<"Enter the valur of x =  ";
        cin>>x;
        cout<<"Enter the value of y =  ";
        cin>>y;

     int area_of_rectangle = calculate_Area(x,y);
     cout<<"area of rectangle is--->"<<area_of_rectangle<<endl;

     return 0;
       }


       /*
       #include<iostream>
using namespace std;

int calculate_Area(int length, int width){
    int area;
    if(length <= 0 || width <= 0) {
        cout << "Invalid dimensions!" << endl;
        area = -1; // Return -1 to indicate error
    } else {
        area = length * width;
    }
    return area;
}

int main() {
    int x, y;
    cout << "Enter the value of x = ";
    cin >> x;
    cout << "Enter the value of y = ";
    cin >> y;

    int area_of_rectangle = calculate_Area(x, y);
    if (area_of_rectangle != -1) {
        cout << "Area of rectangle is ---> " << area_of_rectangle << endl;
    }

    return 0;
    }
    
     */
