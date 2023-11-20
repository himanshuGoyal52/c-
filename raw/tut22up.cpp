#include<iostream>
#include <string>
#include <iomanip>
using namespace std;

class binary
{   string s; // s is a private --> by default in class all are private
    public:
        void read(void);
        void chk_bin(void);
        void ones_compliment(void);
        void dis(void);
        void dis1();
};

void binary :: read(void)
{   cout<<"Enter a binary number : ";
    cin>>s;
}

void binary :: chk_bin(void)
{   for (int i = 0; i < s.length(); i++)
    {   if(s.at(i) != '0' && s.at(i) != '1')
        {cout<<"Incorrect binary format."<<endl;
        exit(0);}

    }
}

void binary :: ones_compliment(void)
{   //chk_bin();  //nesting of function
    for (int i = 0; i < s.length(); i++)
    {   if(s.at(i)=='0'){s.at(i) = '1';}
        else {s.at(i) = '0';}
    }
}

void binary :: dis(void)
{   cout<<"Displaying your binary number : "<<setw(21+s.length())<<s<<endl;
    
}

void binary :: dis1()
{
    cout<<"Displaying one's complimant of given binary number : "<<s;

}

int main()
{  
    
    binary b;
    b.read();
    b.chk_bin();
    b.dis();
    b.ones_compliment();
    b.dis1(); 
    

    return 0;
}