/* 5. Hybrid (Virtual) Inheritance: Hybrid Inheritance is implemented by combining more than one type of inheritance.
                                     For example: Combining Hierarchical inheritance and Multiple Inheritance. 
                                     Below image shows the combination of hierarchical and multiple inheritance:  */
#include<bits/stdc++.h>
using namespace std;

class A{
         public:
         void honda(){
                 cout<<"I am honda city"<<endl;
         }

};

class B{
         public:
         void tata(){
                 cout<<"I am Indigo"<<endl;
         }
};
class C:public B,public A{
          public:
         void bajaj(){
                 cout<<"I am discover 150cc"<<endl;
         }

};
class D:public C{
            public:
         void bmw(){
                cout<<"i am BMW S series"<<endl; 
         }
};
class F:public D{
          public:
         void marcadees(){
                cout<<"I am mercadees"<<endl;
         }
};
class G:public F{
         public:
         void Benz(){
                  cout<<"I am Benz"<<endl;
         }
};
int main(){
    G obj;
    obj.honda();
    obj.tata();
    obj.bajaj();
    obj.Benz();
    obj.bmw();
    obj.marcadees();
    


}