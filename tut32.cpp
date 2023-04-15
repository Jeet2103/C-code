# include <iostream>
# include <cmath>// sqrt is a function of cmath header file .
using namespace std;
class point;
class dist{
    public:
    int dis(point , point );
        

};

class point{
    int x,y;
    friend class dist;
    public:
    point (int a, int b){
     x=a;
     y=b;   
    }
    void printpoint(void){
        cout<<" The point is = ("<<x<<","<<y<<")"<<endl;
    }
};
int dist::dis(point o1, point o2){
      return sqrt(((o2.x-o1.x)*(o2.x-o1.x))+((o2.y-o1.y)*(o2.y-o1.y)));
      
}
int main(){
    point p1(5,6);
    p1.printpoint();
    point p2(3,6);
    p2.printpoint();
    dist d1;
    int res= d1.dis(p1,p2);
    cout<<"The distance between two points is = "<<res<<endl;
    
    return 0;
}