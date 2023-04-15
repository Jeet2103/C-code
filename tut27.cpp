# include <iostream>
using namespace std;
// Foriward decleartion.
class complex;
class calculator {
    public:
    int add(int a, int b){
        return (a+b);
    }
    int sumrealcomplex(complex, complex);
    int sumcompcomplex(complex, complex);
};
class complex{
    int a, b;
    // individually declearation function of calculator class as  friend .
    // friend int calculator::sumrealcomplex(complex, complex);
    // friend int calculator::sumcompcomplex(complex, complex);
    // alter: declearation the calculator  class as a friend.
    friend class calculator;
    public:
    void setdata(int a1, int b1 ){
        a=a1;
        b=b1;

    }
    void printdata(void){
        cout<<" The complex number is = ("<<a<<" + "<<b<<"i)"<<endl;
    }
};
int calculator:: sumrealcomplex (complex o1 , complex o2){
    return (o1.a+ o2.a);
}
int calculator:: sumcompcomplex (complex o1 , complex o2){
    return (o1.b+ o2.b);
}
int main(){
    complex o1, o2;
  o1. setdata(4,7);
  o1.printdata();
  o2. setdata(5,8);
  o2.printdata();
  calculator sum;
  int res = sum. sumrealcomplex(o1, o2);
  cout<<" The add of the real part of two complex number o1 and o2 is = "<<res<<endl;
  int res2 = sum. sumcompcomplex(o1, o2);
  cout<<" The add of the complex part of two complex number o1 and o2 is = "<<res2<<endl;
      int res1 =sum.add(3,7);
      cout<<"The result of above equation is = "<<res1<<endl;
    return 0;
}