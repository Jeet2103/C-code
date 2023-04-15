# include <iostream>
using namespace std;
// constructor overloading......
class complex{
    int a,b ;
    public:
    complex (int x, int y){
        a=x;
        b=y;

    }
    void printnumber (void){
        cout<<" The complex number is = ("<<a<<" + "<<b<<"i)"<<endl;
    }
    complex (int w){
         a=w;
         b=0;
    }
};
int main(){
    complex c1(4,5);
    c1.printnumber();
    complex c2(10);
      
     c2.printnumber();

    
    return 0;
}