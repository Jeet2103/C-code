# include <iostream>
using namespace std ;
//  using template 
 template <class T>
class vector{
    public:
    T * arrey;
    int size;
    vector (  int m){
        size =m;
        arrey = new T [size];
    }
    T dotproduct(vector &v){
        T d=0;
        for( int i =0; i<size; i++){
        d +=  this ->arrey[i]*v.arrey[i];
        }
        return d;
    }
};
int main(){
    vector <float> v1(3);
    v1.arrey[0]=4.5;
    v1.arrey[1]=5.5;
    v1.arrey[2]=6.5;
    vector <float>v2(3);
    v2.arrey[0]=3.4;
    v2.arrey[1]=4.4;
    v2.arrey[2]=5.2;
    float a= v1.dotproduct(v2);
    cout<< " The dot product of vector v1 and v2 is : "<<a<<endl;

return 0 ;
} 