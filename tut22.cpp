 // OOPs - classes and objects
    // C++ --> initially called --> C with classes by stroustroup
    // class --> extension of structures (in C)
    // Structures had limitation --> members are public
    //                           --> no methods            
    // classes --> structures + more
    // classes --> can have method and properties
    // classes --> can make few members as private and few as public 
    // structures in c++ are typedef
    // you can declare objects along with the class declartion like this
            /* class employee{
                 //class defination
             } harry, rohan , lavish;*/ 
    // harry.salary = 8 // makes no sense if salary is private

    // nesting of member functions



#include<iostream>
#include <string>
using namespace std;

class binary
{   string s; // s is a private --> by default in class all are private
    public:
        void read(void);
        void chk_bin(void);
        void ones_compliment(void);
        void dis(void);
};

void binary :: read(void)
{   cout<<"enter a binary number :";
    cin>>s;
}

void binary :: chk_bin(void)
{   for (int i = 0; i < s.length(); i++)
    {   if(s.at(i) != '0' && s.at(i) != '1')
        {cout<<"incorrect binary format"<<endl;
        exit(0);}
    }
}

void binary :: ones_compliment(void)
{   chk_bin();  //nesting of function
    for (int i = 0; i < s.length(); i++)
    {   if(s.at(i)=='0'){s.at(i) = '1';}
        else {s.at(i) = '0';}
    }
}

void binary :: dis(void)
{   cout<<"displaying your binary number"<<endl;
    for (int i = 0; i < s.length(); i++)
    {   cout<<s.at(i);
    }
    cout<<endl;
}

int main()
{  
    
    binary b;
    b.read();
    b.chk_bin();
    b.dis();
    b.ones_compliment();
    b.dis(); 
    

    return 0;
}