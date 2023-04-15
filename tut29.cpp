# include <iostream>
using namespace std;
class c2;
class c1{
    int val1;
     friend void exchange(c1&, c2&);
    
    public:
    void intdata(int a){
        val1= a;
    }
    void display(void){
        cout<<" The value is = "<<val1<<endl;
    }
};

class c2{
    int val2;
     friend void exchange(c1&, c2&);
    public:
    void intdata(int a){
        val2= a;
    }
    void display(void){
        cout<<" The value is = "<<val2<<endl;
    }
};
void exchange(c1 &x, c2 &y){
    int temp = x.val1;
    x.val1= y.val2;
    y.val2= temp;
}

int main(){
    c1 o1;
    c2 o2;
    
    o1. intdata(6);
    cout<<"The value of o1 before exchange is  ................."<<endl;
    o1.display();
    o2. intdata(9);
    cout<<"The value of o2 before exchange is ................."<<endl;
    o2.display();
    exchange(o1,o2);
    cout<<"The value of o1 after exchange is ................."<<endl;
    o1.display();
    cout<<"The value of o2 after exchange is ................."<<endl;
    o2. display();
     
    
    return 0;
}