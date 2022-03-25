#include<iostream>
#include<string>
using namespace std;

class CWH{
    protected:
    char title[30];
    float rating;

    public:
    CWH(string s,float r){
     title = s;
     rating = r;
    }

      virtual void display(){}
};

class CWHVideo: public CWH{
  float videoLength;
  public:
  CWHVideo(char *s, float r, int val): CWH(s,r){
        videoLength = vl;
  }
   void display(){
        cout<<"This is an amazing video wiith title "<<title<<endl;
        cout<<"Rating: "<<rating<<" out of 5 stars "<<endl;
        cout<<"Length of this video is  "<<videoLength<<"minute"endl;
   }
};

class CWHText: public CWH{

    int words;
    public:
    CWHVideo(char *s, float r, int wc):CWH(s,r){
        words = wc;
    }

        void display(){
        cout<<"This is an amazing text tutorial with title "<<title<<endl;
        cout<<"Rating of this text tutorial: "<<rating<<" out of 5 stars "<<endl;
        cout<<"No. of words in this text tutorial is: "<<words<<"words"endl;
   }

};


int main(){
              
    string title;
    float rating,vlen;
    int words;

    title = "This is Django";
    vlen = 4.56;
    rating = 4.92;
    CWHVideo djVideo(title, rating, vlen);

    title = "Django tutorial Text";
    words = 433;
    rating = 4.19;
    CWHText djText(title,rating,words);
    djText.display();

    CWH* tuts[2];
    tuts[0] = &djVideo;
    tuts[1] = &djText;

    tuts[0]->display();
    tuts[1]->display();


    return 0;
}