#include <iostream>
using namespace std;
int main(){
    cout<<"\nThis is tut7.cpp program......"<<endl<<endl;
    //This is selection control structure...........
    // if- else or if - else ladder......
    int age;
    cout<<"Please input your age :-"<<endl;
    cin>>age;
//     cout<<"year"<<endl;
     if ((age<18)&&(age>0)){
         cout<<"You are not silected for the pirty."<<endl;
     }
     else if(age<1){
 cout<<"You are not yet born"<<endl;
     }
     else if (age==18){
         cout<<"You should have a kid pass"<<endl;
     }
     else if((age >18)&&(age<70)){
         cout<<"You are most welcome in the pirty"<<endl;
     }
     else if(age>=70){
         cout<<"You are too old for the pirty ....sorry"<<endl;
     }
   // switch case structure...........
switch(age)
{
    case 18:
    cout<<"You are now 18 years old"<<endl;
    break;
    case 25:
    cout<<"You are now only 25 years old"<<endl;
    break;
    default:
    cout<<" No special case required"<< endl;
    break;
}
cout<<"The program is over.........THE END"<< endl;
    return 0;
}