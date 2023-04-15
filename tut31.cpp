# include <iostream>
using namespace std;
class complex{
    int a,b;
    public:
    complex(int x, int y);
    void print(void){
        cout<<" The complex number is = ("<<a<<" + "<<b<<"i) "<<endl;
    }
};
complex::complex(int x, int y){// This is parameterized constructor as it takes 2 parameters.
    a=x;
    b=y;

}

int main(){
    complex c1(4,10);
    c1.print();
    complex c2= complex(5,15);
    c2.print();
    return 0;
}