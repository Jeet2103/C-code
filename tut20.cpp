# include <iostream>
using namespace std;
// we use class only for secure our data . Otherwise we can use structure.

class employee {
    private: 
    int a,b,c;
    public:
    int d,e;
    void setdata (int a1,int b1, int c1);
    void getdata(){
        cout<<"The value of a is = "<<a<<endl;
        cout<<"The value of b is = "<<b<<endl;
        cout<<"The value of c is = "<<c<<endl;
        cout<<"The value of d is = "<<d<<endl;
        cout<<"The value of e is = "<<e<<endl;
    }
};

void employee:: setdata(int a1, int b1 , int c1){
    a=a1;
    b=b1;
    c=c1;
}
int main(){
employee Jeet;

     Jeet. d= 34;
     Jeet. e= 64;
     Jeet. setdata(24,54,84);
     Jeet . getdata();
    
    return 0;
}