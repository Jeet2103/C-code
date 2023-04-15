# include <iostream>
using namespace std;

int main(){
    cout<<"\n\n...........RESULT OF NEEL NANDIGRAMI............."<<endl<<endl;
    int marks[4]={7,8,9,10};
    int i=0;
    while(i<4)
    {
        cout<<"The marks of subject.."<<i<<"  is  =  "<<marks[i]<<endl;
        i++;
    }
    cout<<"\n\nTotal marks is  ...."<<marks[0]+marks[1]+marks[2]+marks[3]<<endl<<endl;
    return 0;
}