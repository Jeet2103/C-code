# include <iostream>
using namespace std ;
// overloading templates and function.
template<class T>
class jeet{
    public:
    T data;
    jeet( T a){
        data=a;
    }
    void display();
};
template<class T>
void jeet<T>::display(){
    cout<<" The value of data is : "<<data<<endl;

}
void func(int a){
    cout<< " This is first func valued : "<<a<<endl;
}
template<class T>
 void func(T a){
    cout << " This is the template func valued : "<<a<<endl;
 }
int main(){ 
jeet <float> j(3.2);
j.display();
func(70);
func(70.1);
return 0 ;
} 