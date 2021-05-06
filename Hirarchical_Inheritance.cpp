/* Hierarchical Inheritance: In this type of inheritance, more than one sub class is inherited from a single base class. 
                              i.e. more than one derived class is created from a single base class. */
#include<bits/stdc++.h>
using namespace std;

class A{
        public:
        void numeric1(){
          cout<<"i am harsh"<<endl;
        }
};
class B{
         public:
        void numeric2(){
       cout<<"i am ankit"<<endl;
        }
};
class C{
         public:
        void numeric3(){
       cout<<"i am utkarsh"<<endl;
        }
};
class D{
         public:
        void numeric4(){
        cout<<"i am naveen"<<endl;
        }

};
class E: public B ,public A{
         public:
         void numeric5(){
         cout<<"i am shivam"<<endl;
        }

};
class F:public D,public C{
         public:
        void numeric6(){
        cout<<"i am satyam"<<endl;
        }
};
class G: public F,public E{
         public:
        void numeric7(){
        cout<<"i am ankit jain"<<endl;
        }
};
int main(){
    G obj;
    obj.numeric1();
    obj.numeric2();
    obj.numeric3();
    obj.numeric4();
    obj.numeric5();
    obj.numeric6();
    obj.numeric7();
    
}