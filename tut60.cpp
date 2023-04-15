# include <iostream>
using namespace std ;
// Multiples parametre templates.
template <class t1, class t2>
class some{
    public:
    t1 data1 ;
    t2 data2;
    some ( t1 a, t2 b){
        data1 =a;
        data2 =b;
    }
    void display(void){
        cout<<"This is the value of data1 : "<<this->data1<<endl<<"This is the value of data2 : "<<this->data2<<endl;
    }
};
int main(){ 

some <int,float>s1(3, 3.4);
s1.display();
cout<< " NEXT"<<endl;
some <char,float>s2('D', 3.4);
s2.display();

return 0 ;
} 