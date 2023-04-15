# include <iostream>
using namespace std;
// Multiple inheritance.
// syntex of multiple inheritance.
// class derived : visibilioty mode base1, visibility mode base2{};

class base1{
    protected:
    int base1int;
    public:
    void set_base1int(int a){
        base1int=a;
    }
};
class base2{
    protected:
    int base2int;
    public:
    void set_base2int(int b){
        base2int=b;
    }
};
// I can make more than two base in multiple inheritance.
class derived: public base1, public base2{
    public:
    void show(){
        cout<< "  \n The value of base1 and base2 is : "<< base1int<< " and "<< base2int<< " . "<< endl;
        cout<< "  \n The addition of  base 1 and base 2 is = "<< base1int+ base2int<< endl;
        cout<< " The substraction of  base 1 and base 2 is = "<< base1int- base2int<< endl;
        cout<< " The multipication of  base 1 and base 2 is = "<< base1int* base2int<< endl;
        cout<< " The devidation of  base 1 and base 2 is = "<< base1int/ base2int<< endl;
    }
};
int main(){
    derived Jeet;
    Jeet. set_base1int(25);
    Jeet. set_base2int(5);
    Jeet.show();
    
    return 0;
}                