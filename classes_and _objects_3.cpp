#include<iostream>
#include<string>
using namespace std;

class cars{
    public:

    string brand_of_car;
    int model;
    float price;
    string color;
    string customised;

    void getdetails_car_brand(){
        cout<<"BRAND_OF_CAR"<<brand_of_car<<endl;}
        void getdetails_model()
        {
        cout<<"MODEL_OF_CAR"<<model<<endl;
        }
        void getdetails_price()
        {
        cout<<"PRICE_OF_CAR"<<price<<endl;
        }
        void getdetails_color_car()
        {
        cout<<"COLOR_OF_CAR"<<color<<endl;
        }
        void getdetails_customised()
        {
        cout<<"CAR_IS_CUSTAMISES"<<customised<<endl;
        }
};

int main(){
    cars tops_cars;

    tops_cars.brand_of_car = "toyota";
    tops_cars.model = 2019;
    tops_cars.price = 3500000000;
    tops_cars.color = "white";
    tops_cars.customised = "yes";

    tops_cars.getdetails_car_brand();
    tops_cars.getdetails_color_car();
    tops_cars.getdetails_model();
    tops_cars.getdetails_price();
    tops_cars.getdetails_customised();

    return 0;
}