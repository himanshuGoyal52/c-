#include<iostream>

using namespace std;

class number
{   int a;
    public:
        number(){ a=0; }
        number(int num)
        {
            a=num;
        }

        number(number &obj)          // Copy constructor
        {   cout<<"!! Copy constructor called !!"<<endl;
            a=obj.a;
        }

        void display()
        {
            cout<<"The number for this object is "<<a<<endl;
        }
};

int main()
{   number x,y,z(54);
    x.display();
    y.display();
    z.display();
    // z1 should exactly resemble as z or x or y.
    number z1(z);   // copy constructor invoked 
    z1.display();
    // When no copy constructor is found ,compiler supplies its own copy constructor
    
    number z2;
    z2 = z;  // This is assignment. 
    z2.display(); // copy constructor not invoked

    number z3 = z;  // copy constructor invoked  
    z3.display(); 


    return 0;  
}