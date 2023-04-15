# include <iostream>
using namespace std;

int main(){
   //Arrey in c++ program.
   cout<<"............RESULT OF NEEL NANDIGRAMI............."<<endl<<endl;
   int marks[6] ={7,8,9,10,9,10 };
   //process 1
   for (int i=0; i<6;i++)
   {
    cout<<" The marks of Neel Nandigrami in  subject  "<<i<<" is...."<<marks[i]<<endl;
   } 
   cout<<"   \nThe total marks is out of 60  =   "<<marks[0]+marks[1]+marks[2]+marks[3]+marks[4]+marks[5]<<endl<<endl;
//process 2
//These way can easily change the value in the middle of these.
 marks[2]=10;
cout<<"The number of Neel Nandigrmi in subject 1... "<<marks[0]<<endl;
cout<<"The number of Neel Nandigrmi in subject 2... "<<marks[1]<<endl;
cout<<"The number of Neel Nandigrmi in subject 3... "<<marks[2]<<endl;
cout<<"The number of Neel Nandigrmi in subject 4... "<<marks[3]<<endl;
cout<<"The number of Neel Nandigrmi in subject 5... "<<marks[4]<<endl;
cout<<"The number of Neel Nandigrmi in subject 6... "<<marks[5]<<endl;
//process 3
 int mathmarks[4] ;
 mathmarks[0]= 99;
 mathmarks[1]= 98;
 mathmarks[2]= 89;
 mathmarks[3]= 100;
cout<<"  \nThe mathmarks in summetive 1 is..."<<mathmarks[0]<<endl;
cout<<"  \nThe mathmarks in summetive 2 is..."<<mathmarks[1]<<endl;
cout<<"  \nThe mathmarks in summetive 3 is..."<<mathmarks[2]<<endl;
cout<<"  \nThe mathmarks in summetive 4 is..."<<mathmarks[3]<<endl;
cout<<"\nTotal   mathmarks in all summetive is...."<<mathmarks[0]+mathmarks[1]+mathmarks[2]+mathmarks[3]<<endl<<endl;
   return 0; 
}