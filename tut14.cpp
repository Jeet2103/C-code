# include <iostream>
using namespace std;

     typedef struct employee
     //Using typedef .. I can use short form of struct employee.... ep.
     {
        int emailid;
        char favletter ;
        float salary ;
     } ep;
     // I can use union when I want to use 1 value at a time. 
     // for this I can optimize mamory .
     union money
     {
        int rice;
        char car;
        float pounds;
     };
int main(){
    //I can use enum when i want to give a order of any event. like billow;
    enum meal{ breakfast,  lunch, dinner};
    meal A= breakfast;
    meal B= lunch;
    meal C= dinner;
    cout<<(A==0)<<endl;
    cout<<(B==1)<<endl;
    cout<<(C==2)<<endl;
    cout<<"I already complete A meal   "<<A<<endl<<endl;
    cout<<"I already complete B meal   "<<B<<endl<<endl;
    cout<<"I already complete C meal   "<<C<<endl<<endl;

union money m1;
//  m1.rice =99;
m1.car ='C';
// m1.pounds = 3.9;

ep Jeet;
ep Arnab;
ep Sayan;
Jeet.emailid=000;
Jeet.favletter ='J';
Jeet.salary =1000000000;
Arnab.emailid =111;
Arnab.favletter ='A';
Arnab.salary =30000;
Sayan.emailid =222;
Sayan.favletter ='S';
Sayan.salary =40000;
cout<<"The email id of Jeet is..."<<Jeet.emailid<<endl;
cout<<"The Favourite letter of Jeet is..."<<Jeet.favletter<<endl;
cout<<"The monthly salary of Jeet is..."<<Jeet.salary<<endl<<endl;
cout<<"The email id of Arnab is..."<<Arnab.emailid<<endl;
cout<<"The Favourite letter of Arnab is..."<<Arnab.favletter<<endl;
cout<<"The monthly salary of Arnab is..."<<Arnab.salary<<"$  "<<endl<<endl;
cout<<"The email id of Sayan is..."<<Sayan.emailid<<endl;
cout<<"The Favourite letter of Sayan is..."<<Sayan.favletter<<endl;
cout<<"The monthly salary of Sayan is..."<<Sayan.salary<<"$  "<<endl<<endl;



cout<<"My union value is...."<<m1.car<<endl<<endl;
    return 0;
}