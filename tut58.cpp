# include <iostream>
# include <fstream>
# include <string>
// Read and Write using open() function.
using namespace std;

int main(){
 ofstream out;
 out.open("sample60.txt");
 out<<" 1. This is me.\n";
 out<<" 2. I am jeet Nandigrami.\n";
 out<<" 3. I am a cse AIML student of Heritage Institute of Technology.\n";
 out.close();
 ifstream in ;
 in .open("sample60.txt");
 string st,st1,st2;
//  in>>st>>st1;
while ( in.eof()==0){//This i can use when i want to read all lines.

getline(in,st);
// getline(in,st1);
// getline(in,st2);
 cout<<st;
 }
    return 0;

}