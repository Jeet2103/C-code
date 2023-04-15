#include<iostream>
# include <iomanip>
using namespace std;
int main(){
    // int i=1;
    //   while(i<=10)
    // {
    //     cout<<"The multipication order of 99 is......"<<99*i<<endl<<endl;
    //     99*i++;
    // }


    //    do{
    //        cout<<"The multipication table of 25 is......."<<25*i<<endl;
    //        25*i++;
    //    }while(i<=10);

for(int i=1;i<=20;i++)
{
    cout<<"The multipication order of 100 is.....100  *"<<setw(3)<<i<<"  ="<<setw(6)<<100*i<<endl;
}
int j=1;
  while(j<=10)
  {
    cout<<"The multipication order of 200 is.....200  *"<<setw(3)<<j<<"  ="<<setw(6)<<200*j<<endl<<endl;
    j++;
  }
  int k=1;
  do{
    cout<<"The multipication order of 500 is.....500  *"<<setw(3)<<k<<"  ="<<setw(6)<<500*k<<endl;
k++;
  }while(k<=10);
    return 0;
}