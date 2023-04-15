# include <iostream>
using namespace std ;
class verify{
     public:
    string s;
   
   void show_number (void){
        cout << " Please enter the binary number : "<<endl;
        cin>>s;
    }
    void verify_number();
    void display(void){
        cout<< " The binary number is : "<<s<<endl;
    }
    void exchange(void){
        for ( int i=0 ; i<s.length(); i++){
            if ( s.at(i) =='1'){
                s.at(i)='0';
            }
            else 
            {
                s.at(i)='1';
            }
        }
        cout<< " Number after exchange digit each other in the binary number."<<endl;
    }
    
};
void verify :: verify_number(void){
    for (int i=0 ; i<s.length() ;i++){
        if (s.at(i)!='1' && s.at(i)!='0'){
            cout<< " This number is not a binary number ."<<endl;
            exit (0);
        }
       
    }
}
int main(){ 
verify v1 ;
v1.show_number();
v1.verify_number();
v1.display();
v1.exchange();
v1.display();
return 0 ;
} 