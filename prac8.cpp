# include <iostream>
# include <cmath>

using namespace std;
class point;
class dist{
    public:
int dis(point , point);
};
class point {
    int x, y;
    friend class dist;
    public:
   
    void display(void){
      cout<<" The X co-ordinant of the point is = ";
      cin>>x;
      cout<<" The Y co-ordinant of the point is = ";
      cin>>y;
    }
   
};
int dist::dis(point o1, point o2){
    return sqrt(((o2.x-o1.x)*(o2.x-o1.x))+((o2.y-o1.y)*(o2.y-o1.y)));
}


int main(){
    point p1, p2;
    p1.display();
     cout<<endl;
    p2.display();
    dist d1;
    int res = d1.dis(p1,p2);
    cout<<" \nThe distance between two points is = "<<res<<endl;
    
    return 0;
}