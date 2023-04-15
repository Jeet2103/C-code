# include <iostream>
using namespace std ;
template <class t>
void swapp( t &a, t &b){
    t temp =a;
    a=b;
    b= temp;
}
template <class t1, class t2>
float average( t1 a, t2 b){
    return (a+b)/2.0;
}
int main(){ 
float a = average( 2.5,3.8);
printf(" The average of two number is : %.3f \n ",a);
int y= 5;
int x = 34;
// float x= 3.4;
// float y= 8.4;
 swapp(x,y);
cout<< " The value of x is : " <<x<<endl;
printf(" The value of y is : %i \n", y);
return 0 ;
} 
// Here %i = intiger
// % d= double
// %f = float