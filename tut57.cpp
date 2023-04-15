# include <iostream>
# include <fstream>
// Read and Write using constructor.
using namespace std ;

int main(){ 
ofstream hout( "sample60.txt");
string name;
cout<< " Enter the name : "<<endl;
cin>>name;
hout<<name + " is my name .";
hout.close();
ifstream hin("sample60.txt");
string st;
// hin>>st;
getline(hin,st);
getline(hin,st);
cout<<" The content name is : "<<st;
hin.close();
return 0 ;
} 