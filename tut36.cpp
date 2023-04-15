#include <iostream>
using namespace std;
class number{
    int a;
    public:
    number(){// defalut constructor .
        a=10;
    }
    number (int num){
        a= num;
    }
    number (number &obj){
        cout<< " The  copy constructor called :"<<endl;  
        a=obj.a;
    }
    // compiler already give a copy constructor . 
    //copy constructor use when i want to copy a object .
    void display(void){
        cout<<" The numbner for this object is : "<<a<<endl;
    }
};

int main(){
    number n1, n2, n3(100) ;
    n1.display();
    n2.display();
    n3.display();
    number n4(n3);
    n4.display();
  
   // n5 = n3;// copy constructor  not called .
    number n6 = n3;
    n6.display();

    return 0;
}