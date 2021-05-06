
#include<bits/stdc++.h>
using namespace std;

class Car{
    protected:
    string speed;
    string color;
    void specification(){
      cout<<"my speed is 400 km/h"<<endl;
    }
    private:
    void price(){
      cout<<"cost of car is 70000000"<<endl;
    }
    public:
    void drive(){
        cout<<"vroom goes the car ...... "<<endl;
    }
};

class Tesla : public Car{
    int battery_level;
    public:
    Tesla(){
        battery_level=78;
        color = "red";
    }

    void view_battery(){
        cout<<"Baterry level is "<<battery_level<<endl;
    }    

    void print_color(){
        cout<<"My car color is "<<color;
    }
};

int main(){
    Tesla modelE;
    modelE.view_battery();
    modelE.drive();  
   // modelE.specification();
    modelE.print_color();
  //modelE.price();
    return 0;
}
