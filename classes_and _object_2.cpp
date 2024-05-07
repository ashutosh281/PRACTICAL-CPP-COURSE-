#include<iostream>
#include<string>

using namespace std;

class animal{
   public:
   string originalname; //name of animla
   string species;//name of species
   int age;

void introduce(){
        cout << "Name: " << originalname << endl;
        cout << "Species: " << species << endl;
        cout << "Age: " << age << " years old" << endl;
}

void makesound(){
    cout<<"sound of animal"<<endl;
}
};

int main(){
    animal cat, dog, elephant;//Creating an object of class Animal named cat
  // Assigning values to the data members of cat
    cat.originalname = "jenny";
    cat.species = "persian";
    cat.age = 3;

    dog.originalname = "max";
    dog.species = "bull-dog";
    dog.age = 8;

    elephant.originalname = "dolly";
    elephant.species = "asian";
    elephant.age = 11;
// Calling member functions on the object cat
    cat.introduce();
    cat.makesound();

    dog.introduce();
    dog.makesound();

    elephant.introduce();
    elephant.makesound();

    return 0;
}