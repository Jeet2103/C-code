# include <iostream>
using namespace std;

int main(){
    // pointers  in arrey.
    int marks[]={1,2,3,4,5};
    int* p = marks;

    // cout<<" just ignore  *(p++).."<<*(p++)<<endl;
    // cout<<" just ignore *(++p).."<<*(++p)<<endl;
    // cout<<" just ignore *(++p).."<<*(++p)<<endl;

    cout <<"The value of *(p) is..."<<*(p)<<endl;
    cout <<"The value of *(p+1) is..."<<*(p+1)<<endl;
    cout <<"The value of *(p+2) is..."<<*(p+2)<<endl;
    cout <<"The value of *(p+3) is..."<<*(p+3)<<endl;
    cout <<"The value of *(p+4) is..."<<*(p+4)<<endl<< endl;

     cout <<"The value of *(p) is..."<<*(p++)<<endl;
    cout <<"The value of *(p+1) is..."<<*(p++)<<endl;
    cout <<"The value of *(p+2) is..."<<*(p++)<<endl;
    cout <<"The value of *(p+3) is..."<<*(p++)<<endl;
    cout <<"The value of *(p+4) is..."<<*(p++)<<endl;

    cout<<"GAME OVER"<<endl;

    return 0;
}