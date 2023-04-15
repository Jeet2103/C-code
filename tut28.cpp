# include <iostream>
using namespace std;
class Y;
class X{
    int data;
    friend void add(X, Y);
    public:
    void setdata(int value){
        data = value;
    }

};

class Y{
    int num;
      friend void add(X, Y);
    public:
    void setdata(int value){
        num = value;
    }

};
void add(X o1, Y o2){
    cout<<" The summing of o1 and o2 is =  "<<(o1.data+ o2.num)<<endl;
}

int main(){
    X a1;
    a1.setdata(3);
    Y b2;
    b2. setdata(7);
    add (a1, b2);
   
    
    return 0;
}