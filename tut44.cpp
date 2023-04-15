# include <iostream>
using namespace std;
 // Virtual base class .
class student{ 
    protected :
    int roll_no ;
    public :
    void setnumber (int a ){
        roll_no = a ;
    }
    void printnumber (void ){
        cout <<  " Your roll number is : "<< roll_no << endl;
    }

};
class test : virtual public student{
     protected :
     float physics , maths ;
     public:
     void setmarks (float m1, float m2){
        maths = m1;
        physics = m2;
     }
     void printmarks (void ){
        cout<< " Your result is here :- "<<endl
            << " Maths : "<<maths <<endl
            << " Physics : "<<physics <<endl;
     }
};
class sport : virtual public student{
    protected :
    float score ;
    public:
    void setscore (float sc){
    score = sc;
}
void printscore (void ){
    cout<< " Your  PT score is : "<< score<< endl;
}
};
class result : public test , public sport {
private:
float total;
public:
void display(void ){
    cout<< endl;
    printnumber();
    printmarks();
    printscore();
    total = maths + physics + score ;
    cout<< " Your result is out of 210 is  : "<<total<<endl<<endl;
}
};
int main(){
    result Jeet;
    Jeet.setnumber(1);
    Jeet.setmarks(99.5, 98.7);
    Jeet.setscore(9.8);
    Jeet.display();
    
    return 0;
}