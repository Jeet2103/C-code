# include <iostream>
using namespace std ;
class CHW{
    protected:
    string title;
    float ratings;
    public:
    CHW(string s, float r ){
        title =s;
        ratings = r;
    }
     virtual void display(void){
        cout<< " Error .....";
    }
};
class CHWvideo: public CHW{
    float videolength;
    public:
    CHWvideo(string s, float r, float vl): CHW(s,r){
        videolength= vl;
    }
    void display(void){
        cout<< " Title of the video is :  "<<title<<endl;
       
        cout<< " The ratings of the video is : "<<ratings<<" Out of 5 "<<endl;
        cout<< " The video length is : "<<videolength<<" Minutes"<<endl;
    }
};
class CHWtext: public CHW{
    float textlength;
    public:
    CHWtext(string s, float r, float tl): CHW(s,r){
        textlength= tl;
    }
    void display(void){
        cout<< " Title of the text is :  "<<title<<endl;
       
        cout<< " The ratings of the text is : "<<ratings<<" Out of 5 "<<endl;
        cout<< " The text length is : "<<textlength<<" Words"<<endl;
    }
};

int main(){ 
    string title= " Jeet Nandigrami";
    float ratings = 4.9;
    float videolength = 40.7;
    float textlength = 90;
    CHWvideo djngovideo(title, ratings, videolength );
    CHWtext djngotext(title, ratings, textlength);
    CHW * djngo[2];
    djngo[0]= &djngovideo;
    djngo[1]= &djngotext;
    djngo[0]->display();
    cout<<endl;
    djngo[1]->display();



return 0 ;
}
/* 
1. They can not be static.
2. They are accesed by object pointers.
3. Virtual function can be a friend of another class.
4. A virtual function in a base class might not be used.
5. If a virtual functions is defined in a base class ,there is no necessity of redefined in derived class .
*/ 