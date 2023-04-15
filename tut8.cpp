#include<iostream>
using namespace std;
int main(){
    // Types of loops.
    //for loops
    for(int i=1;i<=10;i++)
    {
        cout<<"The number is...."<<i<<endl;
    }
    //While loop...
    int i=1;
    while(i<=10)
    {
        cout<<"The number is..."<<i<<endl<<endl;
        i++;
    }
    //do while loop....
    do{
        cout<<"    This is the number....."<<i<<endl;
        i++;
    }while(i<=20);
    do{
        cout<<"Just for fun......"<<i<<endl;
        i++;
    }while(false);
    
    return 0;
}