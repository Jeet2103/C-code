# include <iostream>
using namespace std;

int main(){
    int a;
    cout<<"Please input any number bellow 0 to 100..."<<endl;
    cin>>a;
    if((a>=0)&&(a<=100))
    {
        cout<<"You write a right number"<<endl;
          cout<<"The solution is =  ("<< ((((a*6)+42)/6)-a)<<")"<<endl;
          cout<<"You input right  number...("<<a<<")"<<endl;
    }
    else{
        cout<<"Please  input the right number.."<<endl;
        cout<<"You input the wrong number...("<<a<<")....which is not between 1 to 100"<<endl;
    }
    cout<<"The result of ((((---*6)+42)/6)-  ---) equation is  = 7."<<endl;
    cout<<"you can  see the prove below... if you input the right number..."<<endl;
    cout<<"Dekha apne ?"<<endl;
    return 0;
}