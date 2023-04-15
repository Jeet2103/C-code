# include <iostream>
using namespace std ;
/*
Syntex for initialaization in constructor.
Constructor ( argument - list) : initialaization section
{
    assignment + other code ;
}
*/
class test {
    int b;
    int a;
    public:
    // test(int i, int j) : a(i), b(j){
    // test(int i, int j) : a(i), b(j+i){
    // test(int i, int j) : a(i), b(j+a){
    test(int i, int j) : b(i), a(j+b){ // It can not be exicuted .because I decleared a first and then b.
    // So if I want to exicuted this then I have to decleared b first.
        cout<< " Constructor are exicuted ."<<endl
        <<" The value of a is : "<<a<<endl
        <<" The value of b is : "<<b<<endl
        << " THE END ";
    }

};
int main(){ 
 test T(6,8);
return 0 ;
} 