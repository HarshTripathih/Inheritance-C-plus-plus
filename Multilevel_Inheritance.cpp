#include<bits/stdc++.h>
using namespace std;

class cycle{

           public:
               void cycle_tiers(){

                 cout<<"cycle has 2 tiers"<<endl;
               }
           

};

class car:public cycle{

            public:
            void car_tiers(){

             cout<<"car has 4 tiers"<<endl;
            }


};
class truck:public car{

            public:
           void truck_tiers(){

            cout<<"Truck has 8 tiers"<<endl;
           }
        


};
int main(){

truck obj;
obj.cycle_tiers();
obj.car_tiers();
obj.truck_tiers();



}