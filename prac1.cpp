# include <iostream>
using namespace std;

int main(){
    for(int i=0;i<=20;i++){
        if(i==10){
            continue;
        }
         cout<<"please ignore......5   *   "<<i<<"   =   "<<5*i<<endl;
    }
    
    return 0;
}