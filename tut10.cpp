# include <iostream>
using namespace std;

int main(){
     for(int i=0;i<5;i++){
         
         if(i==3){
             
             continue;
         }
         cout<<"please ignore  "<<i<<endl;
         
     }
     cout<<"Game over"<<endl<<endl;
    for(int j=0;j<5;j++){
         
         if(j==3){
             
             break;
         }
         cout<<"please ignore  "<<j<<endl;
         
     }
     cout<<"Game over"<<endl<<endl;
         for(int k=0;k<5;k++){
          cout<<"please ignore  "<<k<<endl;  
         if(k==3){
             
             break;
         }
       
         
     }
     cout<<"Game over"<<endl<<endl;
      for(int l=0;l<5;l++){
       cout<<"please ignore  "<<l<<endl;  
         if(l==3){
             
             continue;
         }
         
          
     }
       cout<<"Game over"<<endl<<endl;
    return 0;
}
