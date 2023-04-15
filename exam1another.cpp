# include <iostream>
# include <cmath>
using namespace std ;
class simplecalculator {
    public:
    int a, b;
    void getdata(void){
        cout<< " Enter the value of a : "<<endl;
        cin >> a;
        cout<< " Enter the value of a : "<<endl;
        cin>>b;
    }
    void process1(void){
        cout<< " The value of a+b is : "<<a+b<<endl;
        cout<< " The value of a-b is : "<<a-b<<endl;
        cout<< " The value of a*b is : "<<a*b<<endl;
        cout<< " The value of a/b is : "<<a/b<<endl;
    }
};
class scintificcalculator {
    public:
    int c,d;
    void getdata1(void){
        cout<< " Enter the value of c : "<<endl;
        cin >> c;
        cout<< " Enter the value of d : "<<endl;
        cin>>d;
    }
    void process2 (void){
        cout<< " The value of log c is : "<< log(c)<<endl;
        cout<< " The value of sin c is : "<< sin(c)<<endl;
        cout<< " The value of cube root of d is : "<< cbrt(d)<<endl;
        cout<< " The value of tan of d is : "<< tan(d)<<endl;
    }
};
class hybridcalculator: public simplecalculator , public scintificcalculator {
    public:
    void print(){
    cout<< " The value of all values sum is : "<< ((a+b) +(a-b) +(a*b)+(a/b)+ log(c)+sin(c)+cbrt(d)+ atan(d))<<endl;
    }
};
int main(){ 
hybridcalculator jeet ;
jeet.getdata();
jeet.getdata1();
jeet.process1();
jeet.process2();
jeet.print();
return 0 ;
} 