# include <iostream>
using namespace std ;
//Basic example  of pointer.
int main(){ 
 int a= 3;
 int * b= &a;
//  *b =99;
 cout << " The value of b is : "<<*b<<endl;
 cout << " The value of a is : "<<a<<endl;
 cout<< " The address of b is :"<< b <<endl;
 // New operetor.
 int *p = new int (200);
 float *o = new float (23.5);
 cout<< " The value of p is :"<<*p<<endl;
 cout<< " The value of o is :"<<*o<<endl;
 // use arrey
 int *arr = new int[4] ;
 arr[0] = 10;
 arr[1] = 40;
 arr[2] = 30;
 arr[3] = 20;
//  delete[] arr;
 for ( int i= 0 ; i<=3; i++){
    cout<< " The value of arr["<<i<<"] is : "<<arr[i]<<endl;

 }
 // Delete operetor.
 float * arrey = new float[3];
 
 arrey[0]= 2;
 *(arrey+1)= 3;
 arrey[2]= 4;
 
//  delete[] arrey;
 cout<< " The value of arrey[0] is : "<<arrey[0]<<endl;
 cout<< " The value of arrey[1] is : "<<arrey[1]<<endl;
 cout<< " The value of arrey[2] is : "<<arrey[2]<<endl;
return 0 ;
} 