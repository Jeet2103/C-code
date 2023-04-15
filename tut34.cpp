# include <iostream>
using namespace std;
class simple{
    int data1, data2;
    public:
    simple (int a, int b=10){// default constructor....
    
        data1= a;
        data2= b;
    }
    void print(void){
        cout<< " The value of data1 and data2 is  "<<data1<<" and "<<data2<<endl;
    }
};

int main(){
    simple s1(5);
    s1.print();
    
    return 0;
}