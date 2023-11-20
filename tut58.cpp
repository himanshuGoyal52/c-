#include<iostream>
#include<cstring>
// Abstract Base class and pure virtual class 
using namespace std;

class codeWithHarry // Abstract class
{   protected:
        string title;
        float rating;
    public:
        codeWithHarry(string s, float r)
        {   title = s;
            rating=r;
        }
        virtual void display() = 0; // Do-nothing function-->pure virtual function
        // aage jake hame display ko overide krrna hoga ()
};
class video : public codeWithHarry
{   float videoLength;
    public:
        video(string s, float r, float vl) : codeWithHarry(s,r)
        {  videoLength=vl; 
        }
        void display()
        {   cout<<"This is an amazing video with title : "<<title<<endl;
            cout<<"Ratings of this video : "<<rating<<"/5"<<endl;
            cout<<"Length of this video is "<<videoLength<<" min"<<endl<<endl;
        }
};
class articles : public codeWithHarry
{   int wordCount;
    public:
        articles(string s, float r, int WC) : codeWithHarry(s,r)
        {  wordCount=WC; 
        }   
         void display()
        {   cout<<"This is an amazing article with title : "<<title<<endl;
            cout<<"Ratings of this article : "<<rating<<"/5"<<endl;
            cout<<"Number of words in this article is "<<wordCount<<endl<<endl;
        }
};

int main()
{   string title ; 
    float rating,vlen;
    int words;

    // for code with Harry video 
    title = "Django tutorial ";
    vlen = 4.56;
    rating = 4.5;
    video djangoV(title,rating,vlen);
    // djangoV.display();

    // for code with Harry article 
    title = "Django tutorial notes ";
    words = 79;
    rating = 3.5;
    articles djangoA(title,rating,words);
    djangoA.display();

    codeWithHarry* tuts[2];
    tuts[0]=&djangoV;
    tuts[1]=&djangoA;

    tuts[0]->display();
    tuts[1]->display();

    return 0;
}
/*Here class codeWithHarry is a abstract class in which display is pure 
virtual funtion (it means that we have to define display funtion in every 
derived class of codeWithHarry)  
Abstract class - those classes which are only made to derived some other classes
and which have minimum one pure virtual function.  
*/