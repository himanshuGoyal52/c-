#include<iostream>

using namespace std;

class complex 
{   int a,b;
    public:
        complex(int , int);
        void printNumber()
        {
            cout<<"Your number is "<<a<<"+"<<b<<"i"<<endl;
        }
};

complex :: complex(int x , int y) //---> This is a paramterized constructor as it accepts parameters.
{   a = x;
    b = y;
}

int main()
{   // Implicit call 
    complex a(4,6);

    // Explicit call
    complex b = complex(5,7);
    a.printNumber();
    b.printNumber();
    return 0;
}