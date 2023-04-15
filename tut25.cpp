# include <iostream>
using namespace std;
// complex number  method.

class complex {

    int a;
    int b;
    public:
    void setdata(int a1 , int b1 ){
        a=a1;
        b=b1;
    }
    void getdata(void){
         cout<<" The complex number is = "<<a<< " + "<<b<<"i "<<endl;
    }
     void setdatasum(complex a2 , complex b2){
        a = a2.a + b2.a ;
        b = a2.b + b2.b ;
     }
     void displaydata(void){
        cout<<" The  sum of two complex number is = "<<a<< " + "<<b<<"i "<<endl; 
     }

     
};


int main(){
    complex c1, c2, c3 ;
    c1. setdata(3,8);
    c1. getdata();
    c2. setdata(4,6);
    c2. getdata();
    c3. setdatasum(c1, c2);
    c3. displaydata();
   cout<<" THE ............... END......."<<endl;
   cout<<"The game is over ."<<endl;
   cout<<" Please give me the rating ******"<<endl;  

return 0;
}