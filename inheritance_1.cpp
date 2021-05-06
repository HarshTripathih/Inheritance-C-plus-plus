//all types of inheritance are
#include<bits/stdc++.h>
#include<string>
using namespace std;

class bus{
                protected:
                string protectedbus;
                private:
                string privatebus;
                public:
                string publicbus;


};
class car:public bus{

            protected:
             void harsh1(){
                           cout<<"public bus 1"<<endl;
             }
             private:
             void harsh2(){
                           cout<<"public bus 2"<<endl;
             }
              public:
             void harsh3(){
                           cout<<" public bus 3"<<endl;
             }


};
class cycle:protected bus{

             protected:
             void utkarsh1(){
                           cout<<"protected bus 1"<<endl;
             }
             private:
             void utkarsh2(){
                           cout<<"protected bus 2"<<endl;
             }
              public:
             void utkarsh3(){
                           cout<<" protected bus 3"<<endl;
             }


};
class autorikshaw:private bus{
      
             protected:
             void rashmi1(){
                           cout<<"private bus 1"<<endl;
             }
             private:
             void rashmi2(){
                           cout<<"private bus 2"<<endl;
             }
              public:
             void rashmi3(){
                           cout<<" private bus 3"<<endl;
             }



};
int main(){
      autorikshaw a;
      //a.rashmi1();
      //a.rashmi2();
      a.rashmi3();

      cycle b;
     // b.utkarsh1();
     // b.utkarsh2();
      b.utkarsh3();
     
      car c;
     // c.harsh1();
     // c.harsh2();
      c.harsh3();

      
}