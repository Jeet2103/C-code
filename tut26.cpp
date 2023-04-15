# include <iostream>
using namespace std;
class complex {
    int a, b;
    public:
    void setnumber(int a1, int b1){
        a= a1;
        b= b1;
    }
    // beleow lines meanes  that  non member - sumcomplex function is allowed to do anything with my
    // private parts.
    friend complex sumcomplex(complex o1 , complex o2);
    void printnumber(void){
        cout<<" The complex number is = ("<<a<< " + "<<b<<"i) "<<endl;
    }
};
complex sumcomplex(complex o1 , complex o2){
   complex o3;
   o3.setnumber((o1.a+o2.a),(o1.b+o2.b));
   return o3;
}
int main(){
    complex c1, c2 , sum;
    c1.setnumber(4,5);
    c1. printnumber();
    c2.setnumber(5,8);
    c2. printnumber();
    sum = sumcomplex(c1, c2);
    sum.printnumber();
    return 0;
}
/*properties of friend functions
1.not in the scope of class .
2. since it is not in the scope after giving him permission  for acces anything.
it can not be called from the object of the class    c1. sumcomplex == invalid.
3. can be invoked without the help of any object.
4. usually contents the objects as arguments.
5. can be decleared inside the public or private section of the class.
6. it cannot access the members directly by their names and need object name . 
member name  to access any members.  
*/