#include<iostream>
using namespace std;
int c=45;



int main(){
    //*****************Build in data types******************************
    int a, b, c, x;
    cout<<"\nPlease input the value of a..."<<endl;
    cin>>a;
    cout<<"Please enter the sign = "<<endl;
    cin>>x;
    cout<<"Please input the value of b..."<<endl;
    cin>>b;

    cout<<"The value of the c ........"<< a +x+ b<<endl;// If i want to use global variables then i have to use "::" ... 
    //this sign before value like this.
    cout<<"The global value of c is......."<<::c<<endl;
    //*********************** float, double,long double variables literals************************************
float d= 3.4f;
long double e=3.4l;
cout<<"The size of 3.4...."<<sizeof(3.4)<<"   8 is double"<<endl;
cout<<"The size of 3.4f......"<<sizeof(3.4f)<<"   4 ia float"<<endl;
cout<<"The size of 3.4F...."<<sizeof(3.4F)<<endl;
cout<<"The size of 3.4l...."<<sizeof(3.4l)<<"   12 is long double"<<endl;
cout<<"The size of 3.4L...."<<sizeof(3.4L)<<endl;
cout<<"The float value is ......"<<d<<endl<<"The long double value is....."<<e<<endl;
// *************************raference variable******************************************
int X=4555;
int & Y=X;
cout<<"   This is my actually very luckiest roll number   "<<X<<endl;
cout<<"   This is also my very favourite number    "<<Y<<endl;
// *************************Typecasting variable******************************************
int A=45;
float B=46.2;
cout<<"The value of A is   "<<(float)A<<endl;
cout<<"The value of A is   "<<float(A)<<endl;
cout<<"The value of B is   "<<(int)B<<endl;
cout<<"The value of B is   "<<int(B)<<endl;
int C= int(B);
cout<<"     The value of C is  "<<C<<endl;
cout<<"The value of the expression is....."<<A+B<<endl;
cout<<"The value of the expression is....."<<A+(int)B<<endl;
cout<<"The value of the expression is....."<<A+int(B)<<endl;

    return 0;
}