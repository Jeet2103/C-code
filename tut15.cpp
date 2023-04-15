# include <iostream>
using namespace std;
// function prototype use when my function after return 0;...
int sum(int a, int b);
void g();
int main(){
    int num1, num2;
    cout<<"The first number is"<<endl;
    cin>>num1;
    cout<<"The second number is"<<endl;
    cin>>num2;
    cout<<"The sum is.."<<sum(num1,num2)<<endl;
    g();
 // num1 and num2 are actual paramiters.
    return 0;
}  
 int sum (int a,int b){
    // a and b are forml parameters
    int c=a+b;
    return c;
}
void g(){
    cout<<"Hello Good Morning"<<endl;
}