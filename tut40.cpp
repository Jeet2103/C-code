# include <iostream>
using namespace std;
class base {
protected:
int a;
private :
int b;
public:
void setdata(){
    a= 10;
    b= 30;
}
void getdata1(){
    cout<< " The value of a in the base class is : "<< a<< endl;
}
int getdata2(){
    return b;
}
};
/*
For a protected member.
                          public derived         private derived         protected derived
  private members          not inherit             not inherit              not inherit
  protected members         protected               private                  protrctrd
  public members            public                   private                  protected            
*/
class derived: protected base{
    public:
    int c;
    
    void process (){
        setdata();
        c= a* getdata2();
    }
    void display (){
        cout << " The value of a is : "<< a<< endl;
        cout << " The value of b is : "<< getdata2()<< endl;
        cout << " The value of c is : "<< c<< endl;
    }
};
int main(){
    base b1;
    b1. setdata();
    b1. getdata1();
    derived d1;
    d1. process();
    d1. display();
    
    return 0;
}