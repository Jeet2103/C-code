# include <iostream>
using namespace std ;
// Abstarcted base function.
class jeet{
    protected:
    string title;
    float ratings;
    public:
    jeet(string s, float r){
        title = s;
        ratings = r;
    }
    virtual void display()=0;// do-nothing function--> pure virtual function.
    // This can only use when i don't want to use base class function by default.
    // I have to make a derived class function.
};
class jeetvideo: public jeet{
    float videolength;
    public:
    jeetvideo(string s, float r, float vl): jeet(s,r){
        videolength= vl;
    }
    void display(){
        cout<< " The title of the video is : "<<title<<endl
            <<" The ratings of tehe video is : "<<ratings<<" Out of 5"<<endl
            <<" The video length of the video is : "<<videolength<<" Minutes"<<endl;
    }
};
class jeettext: public jeet{
    float textlength;
    public:
    jeettext(string s, float r, float tl): jeet(s,r){
        textlength= tl;
    }
    void display(){
        cout<< " The title of the text is : "<<title<<endl
            <<" The ratings of tehe text is : "<<ratings<<" Out of 5"<<endl
            <<" The text length of the video is : "<<textlength<<" Minutes"<<endl;
    }
};
int main(){ 
    jeetvideo javavideo( " Jeet tutorial",4.5,4.5 );
    jeettext javatext( " Jeet tutorial",4.5,50 );
    jeet * ptr[2];
    ptr[0] = &javavideo;
    ptr[1] = &javatext;
    ptr[0]->display();
    cout<<endl;
    ptr[1]->display();

return 0 ;
} 