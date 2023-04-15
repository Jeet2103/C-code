#include<iostream>
using namespace std;
// Arrays in classes.

class employee{
    int Id;
   int salary;
    public: 
    void setId(void){
        
         salary = 30000;
        cout<<"Enter the Id of the employee = "<<endl;
        cin>>Id;
        cout<<"The salary of the employee is = "<<salary<<endl;
      
   }
    void getId(void){
        cout<<"The Id number of the emplyee is = "<<Id<<endl;
    }
};

int main(){
    employee jeet, harry, sayan, arnab ;
    // jeet.setId();
    // jeet.getId();
    employee fb[4];
    for(int i=0; i<4;i++){
        fb[i].setId();
      
        fb[i].getId();
    }

    return 0 ;
}