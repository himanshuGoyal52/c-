#include<iostream>
#include<cstring>
using namespace std;

class codeWithHarry
{   protected:
        string title;
        float rating;
    public:
        codeWithHarry(string s, float r)
        {   title = s;
            rating=r;
        }
        virtual void display()
        { cout<<"Bogus code"<<endl;}
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
// Rules for declaring virtual function  
/*
1. They cannot be static.
2. They are accessed by objects pointers.
3. Virtual function can be a friend of another class.
4. A virtual function in base class not be used.
5. If a virtual function is defiend in the base class , there is no necessity of redefinig it in the derived class.

//  void display()
//         {   cout<<"This is an amazing article with title : "<<title<<endl;
//             cout<<"Ratings of this article : "<<rating<<"/5"<<endl;
//             cout<<"Number of words in this article is "<<wordCount<<endl<<endl;
//         }
*/