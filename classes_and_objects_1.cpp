//classes is just a template or blueprint from which objects are created
//class doesnt occupy any memory until object are created

#include<iostream>
#include<string>

using namespace std;

class youtube{
    //ek youtube channel se kya kya link hoti ha
   public:
   string channel_name;//declare variables
   int subscriber;//declare variables    //the variable inside the class is called data member
  int likes;//declare variables
   int dislikes;//declare variables

   void setval(){
      subscriber = 0;
      likes = 0;
      dislikes = 0;
   }

     void showchannel(string name)//member function
     {
         cout<<"channel_Name  =   "<<name<<endl;
         cout<<"techburner"<<subscriber<<endl;
         cout<<"likes : "<<likes<<endl;
         cout<<"dislikes : "<<dislikes <<endl;
     }

     void subscribed(){
        subscriber++;
        cout<<"subcribed to techburner"<<endl;
     }

     void liked(){
        likes ++;
        cout<<"liked the channel"<<endl;
     }

     void disliked();
}; 

void youtube::disliked(){
   dislikes++;
   cout<<"disliked the youtube channel =  "<<endl;
}

int main(){
    //name_of_class and name of object what i declare
    youtube techburner;
    string name = "techburner";
    techburner.setval();
    techburner.showchannel(name);
    techburner.subscribed();  techburner.subscribed();  techburner.subscribed();  techburner.subscribed();
    techburner.liked();
    techburner.disliked();

    techburner.showchannel(name);
    return 0;
}
