# include <iostream>
# include <cmath>
using namespace std;
class simple_calculator{
    protected:
    int num1, num2;
    public:
    void setdata1(int a, int b){
        num1= a;
        num2= b;
    }
};
class scintific_calculator{
    protected:
    int num3;
    int num4;
    public:
    void setdata2(int c){
        num3= c;
    }
    void setdata3(int d){
        num4= d;
    }
   
};
class hybrid_calculator: public simple_calculator, public scintific_calculator{
    public:
    void getdata1(void){
        cout<< " The addition of two given number is : "<< num1+num2<< endl;
        cout<< " The substraction of two given number is : "<< num1-num2<< endl;
        cout<< " The multipication of two given number is : "<< num1*num2<< endl;
        cout<< " The devidation of two given number is : "<< num1/num2<< endl;
    }
    void getdata2(void){
        cout << " The squre of this number is : "<< num3* num3<< endl;
        cout << " The qube of this number is : "<< num3* num3* num3<< endl;
    }
    void getdata3(void){
    cout << " The squre root of this number is : "<<sqrt(num4)<< endl;
    }
    void getdata4(void){
        cout<< " The qube root of this number is : "<< cbrt(num4)<< endl;
    }
};

int main(){
    hybrid_calculator hb1;
    hb1.setdata1(9,3);
    hb1. getdata1();
    cout<< endl;
    hb1.setdata2(5);
    hb1.getdata2();
    cout<< endl;
    hb1.setdata3(100);
    hb1.getdata3();
    cout<< endl;
    hb1.setdata3(1000);
    hb1.getdata4();
    
    return 0;
}
//This is multiple inheritance .
// The visibility mode is public.
