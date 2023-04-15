# include <iostream>
using namespace std;
 
 int sum(int a, int b){
    cout<<"Using with 2 arguments  "<<endl;
    return a+b;
 }
  int sum(int a, int c,int b){
    cout<<"Using with 3 arguments  "<<endl;
    return a+b+c;
 }
// volume of cylinder.
 double vol(double r, int h){
    return (3.14*r*r*h);
 }
 // volume of cube
 int vol(double a){
    return (a*a*a);
 }
 // volume of rectrangular box.
 int vol(int a, int b, int c){
    return (a*b*c);
 }

int main(){
    
     cout <<"The sum of 3 and 5 is ="<<sum(3,5)<<endl;
     cout <<"The sum of 3 ,2 and 5 is ="<<sum(3,2,5)<<endl;
     cout<<"The volume of a cylinder of redius 4 and height 6 is="<<vol(5,6)<<endl;
     cout<<"The volume of a cube of legth 7 is="<<vol(7)<<endl;
     cout<<"The volume of a rectrangular box of length  8,9 and 10 is="<<vol(8,9,10)<<endl;

    return 0;
}