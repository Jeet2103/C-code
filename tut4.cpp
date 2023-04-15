# include<iostream>//This is the system header file.
// # include"this.h"....> this is the user defined header file.
//This will be produce an error if this.h is no present in the current directory.
using namespace std;

int main(){
    int a=4,b=5;
cout<<"This is hello world program    "<<endl;
cout<<"This is my invension  ......."<<endl<<endl;
//Arithmatic program....
cout<<"Followings are the type of Arithmatic operators"<<endl;
cout<<"this is the value of (a+b),(a-b),(a*b),(a/b)"<<endl<<a+b <<endl;
cout<<a-b<<endl<<a*b<<endl<<a/b<<endl;
cout<<"This is the value of a++,a--,--a,++a"<<endl<<a++<<endl<<a--<<endl<<--a<<endl<<++a<<endl;
cout<<endl<<endl;
//Assignment Operators
// int a=4,b=5;
//char c='C';

//Comperison operators..
cout<<"Followings are the type of comperasion operators......"<<endl<<endl;;
cout<<"The value of (a==b)...."<<(a==b)<<endl;
cout<<"The value of (a!=b)...."<<(a!=b)<<endl;
cout<<"The value of (a>=b)...."<<(a>=b)<<endl;
cout<<"The value of (a<=b)...."<<(a<=b)<<endl;
cout<<"The value of (a>b)...."<<(a>b)<<endl;
cout<<"The value of (a<b)...."<<(a<b)<<endl<<endl;

//logical operators....This all are happen for mathematical reasoning.......&& is 'and'..|| is 'or' ! is not ...
cout<<"Followings are the type of logical operators......"<<endl<<endl;;
cout<<"The value of this logical  and operators ((a==b)&&(a<b))...."<<((a==b)&&(a<b))<<endl;
cout<<"The value of this logical and operators ((a<b)&&(a!=b))...."<<((a<b)&&(a!=b))<<endl;
cout<<"The value of this logical and operators ((a<b)&&(a==b))...."<<((a<b)&&(a==b))<<endl;
cout<<"The value of this logical or operators ((a<b)||(a==b))...."<<((a<b)||(a==b))<<endl;
cout<<"The value of this logical not operators (!(a==b))...."<<(!(a==b))<<endl;

    return 0;
}

