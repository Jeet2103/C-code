# include <iostream>
using namespace std;
// Multilevel inheritance
 class  student{
    protected:
    int roll_number;
    public:
    void set_roll_number(int);
    void get_roll_number(void);
 };
 void student:: set_roll_number(int r){
    roll_number= r;
 }
 void student:: get_roll_number(void){
    cout<< " The roll number of the student is : "<< roll_number<< endl;
 }
 class exam : public student{
    protected:
    float maths;
    float physics;
    public:
    void set_marks(float m1, float m2){
        maths =m1;
        physics= m2;
    }
    void display(void){
        cout<< " The full marks of subject maths is : "<< maths<<endl;
        cout<< " The full marks of subject physics is : "<< physics<<endl;
    }
 };
 class result : public exam{
    public:
    int percentage;
   
    void display2(){
        get_roll_number();
        display(); 
        cout<< " The result of this student is : "<<(maths+ physics)/2<< " % "<<endl;
    }
 };
int main(){
   result Jeet;
    Jeet.set_roll_number(45);
    Jeet. set_marks(98,100 );
    Jeet. display2();
    
    return 0;
}