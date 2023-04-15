# include <iostream>
using namespace std;
// destructor never takes an arguments nor does it return any value.
// we can use destructor in any big c++ programme.
// This is very importan.
int count =0;
class num{
    public:
    num (void){
        count ++;
        cout<< " This is the time when constructor is called in object number: "<<count<<endl;
    }
    ~num (void){
        cout<< " This is the time when destructor is called for object number: "<< count<<endl;
        count --;
    }
    
};

int main(){
    cout<< "\n\n ..............WELCOME.................."<< endl<< endl;
    cout << " \nWe are inside our main function. "<<endl<< endl;
    cout<< " Creating first object n1 ......"<<endl;
    num n1;
    {
        cout<< " Entering this block. "<<endl<< endl;
        cout << " Creating two more object "<< endl;
        num n2, n3;
        cout<< " Existing this block......."<< endl<< endl;

    }
    cout<< " Back to main ......."<< endl;
    
    return 0;
}