# include <iostream>
using namespace std;
//CALCULATOR :) :):):):):):)
int main(){
    char input ;
    int a,b;
    cout<<"Please input the first number = "<<endl;
    cin>>a;
    cout<<"Please input the second number = "<<endl;
    cin>>b;
    cout<<"Please input what you want to do = "<<endl;
    cin>>input;
    if( input =='A'){
        cout<<"YOU CHOOSE ADDITION....."<<endl;
        cout<<"The  solution is = "<<(a+b)<<endl;
    }

     else if( input =='S'){
        cout<<"YOU CHOOSE SUBSTRACTION....."<<endl;
        cout<<"The  solution is = "<<(a-b)<<endl;
    }

      else if( input =='D'){
        cout<<"YOU CHOOSE DEVIDATION....."<<endl;
        cout<<"The  solution is = "<<(a/b)<<endl;
    }

     else if( input =='M'){
        cout<<"YOU CHOOSE MULTIPICATION....."<<endl;
        cout<<"The  solution is = "<<(a*b)<<endl;
    }
    cout<<"THANK YOU....."<<endl;
    cout<<"PLEASE VISIT AGAIN"<<endl;
    return 0;
}