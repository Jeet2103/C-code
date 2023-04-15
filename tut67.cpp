# include <iostream>
# include <functional>
# include <algorithm>// for sort() function.
using namespace std ;
// Functions objects(Functor): Function wrapped in a class so that it avelable like a objects.
int main(){ 
int arr[]= { 145,2,355,40,5,788,1};
sort( arr,arr+6, greater<int>());//for descending order.
for( int i=0; i<7;i++){
    cout<< " The number is : "<<arr[i]<<endl;
}
return 0 ;
} 