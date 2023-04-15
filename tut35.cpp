# include <iostream>
using namespace std;
class bankdeposit{
    int principal;
    int years;
    float interestrate;
    float returnvalue;
    public:
     bankdeposit(){}
    bankdeposit(int p, int y,float  r);// r can be value like 0.04.
    bankdeposit(int p, int y, int r);// r can be value like 14.
    void show();
};
bankdeposit::bankdeposit(int p, int y, float r){
    principal= p;
    years= y;
    interestrate= r;
    returnvalue= principal;
    for (int i=0; i<y; i++){
        returnvalue= returnvalue * (1+r);
    }
}
bankdeposit::bankdeposit(int p, int y, int r){
    principal= p;
    years= y;
    interestrate= float(r)/100;
    returnvalue= principal;
    for (int i=0; i<y; i++){
        returnvalue= returnvalue * (1+interestrate);
    }
}
void bankdeposit:: show(){
    cout<<" The principal value was = "<<principal<<endl;
    cout<< " The returnvalue after " <<years<<" year  is "<<  returnvalue<<endl;
}

int main(){
    bankdeposit b1, b2, b3;
    int p, y;
    int R ;
    float r ;
 cout<< " Enter the value of p, y and r is "<<endl;
 cin>>p>>y>>r;

    b1= bankdeposit(p,y,r);
    b1.show();
    cout<< " Enter the value of p, y and R is "<<endl;
    cin>>p>>y>>R;
    b2= bankdeposit(p,y,R);
    b2.show();

    
    return 0;
}