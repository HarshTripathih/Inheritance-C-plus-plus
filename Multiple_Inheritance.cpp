#include<bits/stdc++.h>
using namespace std;

class A{
         public:
         void base1(){
          cout<<"I am base 1 bro harsh"<<endl;

         }

};

class B{
         public:
         void base2(){
         cout<<"I am base 2 bro harsh"<<endl;

         }



};

class derived: public A, public B{

        };
        int main(){
           derived obj;
           obj.base1();
           obj.base2();

        }