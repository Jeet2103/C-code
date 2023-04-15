# include <iostream>
using namespace std ;

int main(){ 
int count=0;
string a;
cout<<"Please enter the alphabet :"<<endl;
cin>>a;
for(int i=0;i<a.length();i++)
{
    if(a.at(i)=='a'||a.at(i)=='e'||a.at(i)=='i'||a.at(i)=='o'||a.at(i)=='u'||a.at(i)=='A'||a.at(i)=='E'||a.at(i)=='I'||a.at(i)=='O'||a.at(i)=='U')
    {

        count++;
    }
}
cout<<"The number of vowel is : "<<count;
return 0 ;
} 