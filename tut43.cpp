# include <iostream>
using namespace std;
// Ambiguity Resolution. 
class base1{
    public:
    void greet(){
        cout<<" How are you ? "<< endl;
    }
   
};
class base2{
    public:
    void greet(){
        cout<<" Kaise ho ? "<< endl;
    }
};
class derived : public base1, public base2{
    int a;
    public:
    void greet(){
        base1::greet();
    }
};
class B {
    public :
    void say(){
        cout<< " Hello Jeet . "<< endl;
    }
};
class D : public B{
    // D 's new say() method will over write the privious B class say() method .
    public:
    void say(){
        cout<< " Hello Neel . "<< endl;
    }
};
int main(){
    // Ambibuity1
    cout<< endl;
    base1 base1obj;
    base2 base2obj;
    base1obj. greet();
    base2obj. greet();
    derived d1;
    d1.greet();

    // Ambibuty 2
    cout<< endl;
    B b;
    D d;
    b.say();
    d.say();
    return 0;
}