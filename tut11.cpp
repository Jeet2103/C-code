# include <iostream>
using namespace std;

int main(){
    //What is a pointer ?....Data types which holds the other data types.
    int a=23;
    int* b=&a;
    cout<<"The address of a is....("<<b<<")...."<<endl;
    cout<<"The address of a is....("<<&a<<")...."<<endl;
    cout<<"The value of b is....("<<*b<<")....."<<endl<<endl;
    cout<<"This is pointer of pointer.... look bellow"<<endl<<endl;
// &.....> is (address of data types)
// *...> is(value at) Dereference operetor.
// I can also do pointer of pointer like this..
int** c=&b;
cout<<"The address of pointer b is......("<<&b<<")....."<<endl;
cout<<"The address of pointer b is......("<<c<<")....."<<endl;
cout<<"The value of address value at(value at c) is......("<<**c<<")....."<<endl;
    return 0;
}