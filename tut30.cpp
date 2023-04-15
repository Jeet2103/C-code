# include <iostream>
using namespace std;
//  CONSTRUCTOR.
class value {
    double  a;
    public:
    // creating a constructor.
    // constructor is a special member function with the same name as  of the class.
    // it is used to intialized the objects of its class .
    // it is automatically invoked whenever an object is created.
    value (void);// constructor declearation.
    void printvalue(void);
};
value:: value(void){// this is a default constructor.
      a=3.14;
}
void value::printvalue(void){
    cout<<"The value of pi function is = "<<a<<endl;
}

int main(){
    value pi;
    pi.printvalue();
    return 0;
}

/*PROPERTIES OF CONSTRUCTOR...............................

1.It should be decleared in the public sction of the class.
2.It is automatically invoked whenever an object is created.
3.They can not return values and do not have return types.
4.It can have default arguments.
5. We cannot refer to their address.
*/