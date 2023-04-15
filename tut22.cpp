# include <iostream>
using namespace std;
class shop {
    int itemId[10];//[number of item id ]
    int itemprice[10];
    int counter=0;

    public:
    //void initialcounter(void){counter=0;}
    void setdata(void);
    void displaydata(void);
};
void shop::setdata(void){
    cout<<endl;
     for(int i=0;i<10;i++){
    cout<<"Enter Id of your item no "<<i+1/* without use for loop there will be (counter +1)*/<<endl;
    cin>>itemId[counter];
    cout<<"Input price of the item "<<endl;
    cin>>itemprice[counter];
     counter++;
     }
}
void shop:: displaydata(void){
    for(int i=0; i<counter;i++){
        cout<<"The price of the itemId "<<itemId[i]<<" is = "<<itemprice[i]<<endl;
    }
}
int main(){
    shop jeetshop;
    //jeetshop. initialcounter();
    jeetshop. setdata();
    jeetshop. displaydata();
    
    return 0;
}