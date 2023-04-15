# include <iostream>
using namespace std;
// base class.
class employee{
     
    public:
    int id;
    float salary;
    employee(){}
    employee(int inpid){
        id = inpid;
        salary = 20000;
        cout<< " The Id of the employee is : "<< id<< endl;
        cout<< " The salary of the emplyee is : "<< salary << endl;
    }
};
// Derived class syntex.
/* 
class {{derived - class - name}}: {{visibility - mode(public or private)}} {{base class name }}
{
    clas member / methode/ etc.
}
Note: 
1. Default visibility mode is private.
2. public visibility mode :- public member of the base class becomes public member of the derived class.
3. private visibility mode :- public member of the base class becomes private member of the derived class.
4. private member of the base never inherited.
*/
class programmer : public employee 
{
    public:
    int languagecode;
    programmer ( int inpid){
        id = inpid;
        languagecode = 9;
        salary = 30000;
         cout<< " The Id of the employee is : "<< id<< endl;
        cout<< " The languagecode of this programmer is : "<< languagecode << endl;
          cout<< " The salary of the emplyee is : "<< salary << endl;
    }
};
int main(){
    employee Jeet(1), Arnab(2);
    programmer Sayan(3);
    
    return 0;
}