# include <iostream>
using namespace std;

class animal{
     private:
     char a,b,c;
     public:
     int d,e;
     void setdata( char a1, char b1, char c1);
     void getdata(){
        cout<<"The  name of the animal is = "<<a;
        cout<<b;
        cout<<c<<endl;
        cout<<"The cell number of the animal is= "<<d<<endl;
        cout<<"The batch number of the animal is = "<<e<<endl;
     }

};
 
 void animal:: setdata(char a1,char b1, char c1){
    a=a1;
    b=b1;
    c=c1;
 }
int main(){
    animal Dog;
    animal cat;
    cout<<"This is for dog....."<<endl;
    Dog.d= 34;
    Dog. e = 45;
    Dog. setdata('d','o','g');
    Dog. getdata();
    cout<<"This is for cat....."<<endl;
 cat.d= 90;
    cat. e = 100;
    cat. setdata('c','a','t');
    cat. getdata();
    return 0;
}