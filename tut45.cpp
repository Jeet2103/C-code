#include <iostream>
using namespace std;
class base1{
    int data1;
    public:
    base1(int i ){
        data1 = i;
        cout<<" base1 class constructor is called . "<< endl;
    }
    void printbase1(void ){
        cout<< "  The value of data1 is : "<<data1<<endl;
    }
};
class base2{
    int data2;
    public:
    base2(int i ){
        data2 = i;
        cout<<" base2 class constructor is called . "<< endl;
    }
    void printbase2(void ){
        cout<< "  The value of data2 is : "<<data2<<endl;
    }
};
class derived : public base2 , public base1 {
     int derived1, derived2 ;
     public:
     derived ( int a, int b , int c , int d) : base1(a), base2(b){
        derived1= c;
        derived2= d;
        cout<< " Derived class constructor is called . "<< endl;
     }
     void printderived(void){
        cout<< " The value of derived 1 is : "<<derived1<<endl;
        cout<< " The value of derived 2 is : "<<derived2<<endl;
     }
};
int main()
{
derived jeet(1,2,3,4);
jeet.printbase1();
jeet.printbase2();
jeet.printderived();
    return 0;
}
// In special case :
// When class have virtual  class then virtual class constructor first call in derived class.