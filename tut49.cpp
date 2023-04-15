# include <iostream>
using namespace std ;
//Arrey of object using pointers.
class shopitem{
    int id, price;
    public:
    void setdata(int a, int b){
        id = a;
        price = b;

    }
    void getdata(void){
        cout<< " The id of the item is : "<<id<<endl
        << " The price of the item is : "<< price<< " /-"<<endl;
    }
};
int main(){
    int size =4;
    int p, q; 
shopitem *ptr = new shopitem[size];
shopitem *ptrdef = ptr;
for ( int i=0; i<size ; i++){
    cout<< " Enter the Id of the item number "<< (i+1)<< " is : "<<endl;
    cin >> p;
    cout<< " Enter the price of the item number "<< (i+1)<< " is : "<<endl;
    cin>> q;
    ptr -> setdata(p,q);
    ptr++;
}
for ( int j=0 ; j<size ; j++){
    cout<<endl;
    cout<< " This is the information of item number : "<< (j+1)<<endl;
    
    ptrdef -> getdata();
    ptrdef++;
}
return 0 ;
} 