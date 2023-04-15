# include <iostream>
using namespace std;
// Static variable.this function count each object.and give number each object. 
 typedef class employee{
    int Id;
    static int count;
    public:
    void setdata(void){
        cout<<"Enter the Id number of the employee = "<<endl;
        cin>>Id;
        count++;
        cout<<endl;
    }
    void getdata(void){
        cout<<"Emplyee number = "<<count<<endl;
        cout<<"Displaying the Id number of the employee is "<<Id/*<<" and the number of employee is "<<count*/<<endl;
        
    }
    static void getcount(void){// count is the static data member of class employee.
        cout<<"The value of count is = "<<count<<endl;
        cout<<endl;
    }
} ep;
int ep::count=100/* when i want to start from 100*/;// default value is always 0.
int main(){

    ep Jeet,Arnab,Sayan;
    Jeet.setdata();
    Jeet .getdata();
    ep::getcount();
    
    Arnab.setdata();
    Arnab .getdata();
    ep::getcount();

    Sayan.setdata();
    Sayan .getdata();
    ep::getcount();
    return 0;
}