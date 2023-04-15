# include <iostream>
using namespace std;

int main(){
    int a;
  
    cout<<" Please enter the year = "<<endl;
    cin>>a;
    if (  a%400==0 || a%100!=0 && a%4==0){
        cout<<" This year is leapyear."<<endl;
    }
    else 
    {
        cout<<" This year is not leapewar"<<endl;
    }
    return 0;
}