# include <iostream>
# include <fstream>
/*
 The useful classes for working with files in c++ are : 
 1.fstreambase.
 2. ofstream --> Derived from fstreambase class
 2. ifstream --> Derived from fstreambase class

*/

//In oreder work with files in c++ , you will have to open it .Primarily ,there are two ways to open a file.
//1. Using the constructor .
//2. Using the member functions open() of the class.
using namespace std ;
 
int main(){ 
string s= " Jeet Nandigrami is my name . I am very happy with this name .what you thimk about me ? ";
string s2;
// Opening file using constructor and writing down.
ofstream outline ( "sample60.txt");
outline<<s;
ifstream in("sample60b.txt");// Opening file using constructor and reading it.
// in>>s2;// This is use for read one word of the line.
cout<<endl;
getline(in, s2);
cout<<s2;
cout<<endl<<endl;
return 0 ;
} 