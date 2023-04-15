# include <iostream>
using namespace std ;
// Virtual Function in c++ .
class base{
    public:
    int var1 =23;
     virtual void display(){
        cout<< " The value of var1 is : "<<var1<<endl;
    }
   
}; 
class derived : public base {
        public:
        int var2=32;
        void display(){
            cout << " The value of var1 is : "<<var1<<endl;
            cout << " The value of var2 is : "<<var2<<endl;
        }
    };
    class derived2 : public derived{
        public:
        int var3=24;
        void display(){
            cout<< " The value of var1 is : "<<var1<<endl;
            cout<< " The value of var2 is : "<<var2<<endl;
            cout<< " The value of var3 is : "<<var3<<endl;
        }
    };
int main(){
    base * ptrbase;
    base objbase;
    derived objderived;
    ptrbase = &objderived;
    ptrbase ->    display();
    derived *ptrderived;
    derived2 objderived2;
    ptrderived = & objderived2;
    ptrderived -> display();
    objbase.display();

return 0 ;
} 