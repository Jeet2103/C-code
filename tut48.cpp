# include <iostream>
using namespace std ;
//Pointers to objects and arrow operator in cpp.
class complex {
    int real, imaginary ;
    public:
    void setdata( int a, int b ) {
        real = a;
        imaginary =b;
       cout << " The complex number is : ( "<<real <<" + "<<imaginary<<"i ) "<<endl;  
    }
};
int main(){
// complex c1;
// complex *ptr = &c1;
complex *ptr= new complex;
// (*ptr).setdata(3,4);
// Arrow operator.
ptr ->setdata(9,0);
ptr ->setdata(3,4);
// Arrey operator .
complex *ptrs = new complex[3];
complex *ptrsdef = ptrs;
int q,p;
for ( int i=0 ; i<3; i++){
    cout << " The  real and imaginary part of the complex number  "<<(i+1)<<" is :"<<endl;
    cin>> q;
    cout<< "and "<<endl;
    cin >>p;
    ptrsdef -> setdata(q,p);
    ptrsdef++;
}
// ptrs -> setdata(2,3);
return 0 ;
} 