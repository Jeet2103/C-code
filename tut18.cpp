# include <iostream>
using namespace std;
//recurtion.
int fibo( int m){
    if (m<2){
        return 1;
    }
    return fibo(m-2)+fibo(m-1);
}
int factorial (int n){
    if (n<=1){
        return 1;
    }
 return n*factorial (n-1);
}
int main(){
    int a;
    //factorial of a number.
    cout<<"Please input the number ............"<<endl;
    cin>>a;
    cout<<"The factorial of  "<<a<<"  is = "<<factorial(a)<<endl<<endl;
//Fibonachi sequence of number.
int b;
cout<<"Please input the number ........... "<<endl;
cin>>b;
cout<<"The number of the position  "<<b<<" of the fibonachi sequence is ="<<fibo(b)<<endl;
    return 0;
}