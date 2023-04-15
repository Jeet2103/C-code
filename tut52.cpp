# include <iostream>
using namespace std ;
// Pointers to derived class in c++ .
class base_class{
    public:
    
    int var_base;
    void display(){
        
        cout<< " The value of var_base is : "<< var_base<<endl;
    }
};
class derived_class : public base_class {
    public :
    int var_derived;
    void display(){
       
        cout<< " The value of var_base is : "<<var_base<<endl
            << " The value of var_derived is : "<<var_derived<<endl;
    }

};
int main(){ 
base_class *pointer_base_class;
base_class obj_base;
derived_class obj_derived;
pointer_base_class = &obj_derived;
pointer_base_class -> var_base =189;
pointer_base_class -> display();// This call only the base_class display().because pointer can call only inherite function.
derived_class * pointer_derived_class;
pointer_derived_class = & obj_derived;
pointer_derived_class -> var_derived = 100;
cout<< " Now derived class display called . "<<endl;
pointer_derived_class -> display();
cout<< " Now the programe is closed ."<<endl;
cout<< " Have a nice day ....................."<<endl;

return 0 ;
} 