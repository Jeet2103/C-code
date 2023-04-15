# include <iostream>
# include <vector>
using namespace std ;
//STL -> CONTAINER -> SEQUENCE CONTAINER -> VECTOR..... ALL FUNCTION GET C++ VECTOR REFERENCE.
template <class T>
void display(vector<T> &v){
    cout << " Displaying the vector"<<endl;
for( int i=0 ; i<v.size() ; i++){
    cout<<v[i]<<" "<<endl;
}
}
int main(){ 
vector <int> v1;// zero length intiger vector.
// int elements;
int size = 3;
// cout<< " Enter the size : "<<endl;
// cin>>size;
// for ( int i= 0 ; i<size ; i++){
//     cout<< " Enter the first value : "<<endl;
//     cin>>elements;
//     v1.push_back(elements);
    
// }
// vector<int> :: iterator iter = v1.begin();
// v1.insert(iter,45);
// v1.insert(iter+1,45);
// v1.insert(iter+1,3( copy of 45),45);
// v1.insert(iter+1,10,45);
// v1.pop_back();// this function pop back the last enter elements.
// display(v1);
// cout<< v1.at(2);// for evaluate the value of any position .
vector<char> v2(4);// 4 elements charactor vector
v2.push_back('J');
v2.push_back('S');
v2.push_back('G');
v2.push_back('B');
v2.push_back('H');
// display(v2);
vector <char> v3(v2);
// display(v3);
vector<float> v4(5,5.7);// 5 times 5.7 
vector<float>:: iterator ins = v4.begin();
v4.insert(ins+1,6.7);
display(v4);
cout<<v4.size()<<endl;// I can see the size of object.
return 0 ;
} 