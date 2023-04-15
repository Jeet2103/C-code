# include <iostream>
using namespace std ;
class factorial{
    public:
    
   
    int factor(int n){
        
        if( n<=1){
            return 1;
        }
        return (n*factor(n-1));
    }
    
    
};
class fibonachi : public factorial {
    public:
    int fibo(int m){
        if ( m<2){
            return 1;
        }
        return fibo(m-2)+fibo(m-1);
    }
};
int main(){
    
    int p ;
    int size = 4;
factorial *ptr = new factorial[size];
for(int i=0; i<=size;i++){
cout<< " Enter the number "<<i+1 <<" is : "<<endl;
cin>>p;
 int res = ptr ->factor(p);
 cout<<" The factorial of "<<p<<" is : "<<res<<endl;
 ptr++;
}

fibonachi fb1[5];


for(int j=0; j<5; j++) {
cout<< " Please enter the place number of fibonachi series : "<<endl;
cin>> p;
int res1=fb1[j].fibo(p);
cout<< " The "<<p<<" th place number is : "<<res1<<endl;

}

return 0 ;
} 