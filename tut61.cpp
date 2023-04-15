#include <iostream>
using namespace std;
// templates ..... default patameters
template <class t1 = float, class t2 = char, class t3 = string>
class jeet
{
public:
    t1 A;
    t2 B;
    t3 C;
    jeet(t1 a, t2 b, t3 c)
    {
        A = a;
        B = b;
        C = c;
    }
    void display(void){
        cout<< " The value of  A is : "<<A<<endl;
        cout<< " The value of  B is : "<<B<<endl;
        cout<< " The value of  C is : "<<C<<endl;
    }
};
int main()
{
jeet <> j(1.2,'J',"Jeet");
j.display();
cout<<endl;
cout << " This is the braek of one class........"<<endl<<endl;
jeet <int , float, char> e(1,2.9,'E');
e.display();
    return 0;
}