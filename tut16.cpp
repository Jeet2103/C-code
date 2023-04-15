# include <iostream>
using namespace std;
//Call by value 
void swappointers(int *a,int *b){
int temp = *a;
*a=*b;
*b= temp;
}
// call reference by value.

void swapreferencevar(int &X,  int &Y ){
    int temps = X;
    X=Y;
    Y=temps;
    
}
// with return value.
int & swapreturn(int &A, int &B){
    int tempss=A;
    A=B;
    B=tempss;
    return A;

}
int main(){
    int y=5, x=6;
    // cout<<"The value of x is "<<x<<"   The value of y is "<<y<<endl;
    // swappointers(&x,&y);
    // cout<<"The value of x is "<<x<<"   The value of y is "<<y<<endl;

    cout<<"The value of x is "<<x<<"   The value of y is "<<y<<endl;
    swapreferencevar(x,y);
    cout<<"The value of x is "<<x<<"   The value of y is "<<y<<endl;
    swapreturn(x,y)=8;
    cout<<"The extra value of x is   "<<x<<" and the value of y is  "<<y<<endl;
    return 0;
}