# include <iostream>
using namespace std;

// Permutation and combination........
 int  factorial1(int a){
  if (a<=1){
return 1;
  }
return a*factorial1(a-1);
 }

int main(){
  int n=10;
  int p=4;
  int M= n-p;
  cout <<"The factorial of " <<n<<" is = "<<factorial1 (n)<<endl;
  cout <<"The factorial of " <<p<<" is = "<<factorial1 (p)<<endl;
  cout <<"Just for fun = "<<factorial1 (n)/factorial1 (p)<<endl;
  cout<<"The permutation of 10p4 is= "<<(factorial1(n)/ factorial1(M)) << endl;
  cout<<"The combination of 10c4 is= "<<(factorial1(n)/ (factorial1(M)*factorial1(p))) << endl;
 
  return 0;
}