# include <iostream>
using namespace std;
// inline function..... for small equation.for reducing time.
 inline int product(int a, int b){
    // static int c=0,d=1;// This executes only once and next time this function is run, the value of c  and d will retained.
    // c=c+1;  //do not use statics function with inline .
    // d=d+2;
    return a*b;//c+d   don't use static and inline both.
 }
    float moneyrecieved(int currentmoney, float factor =1.04){// factor is now a default value.
        return currentmoney * factor;
    }
    //there have also a constant  value 
    // int strlen (const char *p)

int main(){
    int a,b;
    cout<<"The value of a and b is...."<<endl;
    cin>>a>>b;
    cout <<"The product of this is......"<<product(a,b)<<endl;
    cout <<"The product of this is......"<<product(a,b)<<endl;

    int money = 100000;
    cout<<"If you have  "<<money<<" RS. in your bank account you will recieved  "<<moneyrecieved(money)<<"   RS."<<endl;
    cout<<"If you have  "<<money<<" RS. in your bank account you will recieved  "<<moneyrecieved(money, 1.08)<<"   RS."<<endl;
    cout<<"If you are VIP and  you have  "<<money<<" RS. in your bank account you will recieved  "<<moneyrecieved(money , 1.1)<<"   RS. after 1 year. "<<endl;
   
 
    return 0;
}