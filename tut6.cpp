#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    // int a=5;
    // char b='4';
    // cout<< "The value of a is   "<<a<<endl;
    // cout<< "The value of b is   "<<b<<endl;
    //  a=6;
    // cout<< "The value of b is   "<<b<<endl;
    //********************** Constants in C++......*********************
    const  int a=343434;
    cout<<"   The constant value of a is   "<<a<<endl;
    cout<<"   The constant value of a is   "<<a<<endl<<endl;
    //manupularors in C++..........
int b=3,c=56,d=7876;
cout<<"The value of b is  ..."<<b<<endl;
cout<<"The value of c is  ..."<<c<<endl;
cout<<"The value of d is  ..."<<d<<endl<<endl;
// setw() is a manupulation like endl located in <iomaip> header.
cout<<"The value of b is  ..."<<setw(5)<<b<<endl;
cout<<"The value of c is  ..."<<setw(5)<<c<<endl;
cout<<"The value of d is  ..."<<setw(5)<<d<<endl<<endl;
// operator precedence....
int A=78,B=56;
int C=(((6*A)-B)+A);
cout<<"The value of the above expression is...."<<C<<endl;
    return 0;
}                                                       