#include<bits/stdc++.h>
using namespace std;

class A{
  public:
       void base(){

           cout<<"aware from Covid 1999"<<endl;
       }

};

class B: public A{
        // public:
        // void derived(){
       //cout<<"aware from Covid 19"<<endl;
      // }
};
int main(){

      B obj;
      obj.base();
      //obj.derived();
     
    return 0;
}