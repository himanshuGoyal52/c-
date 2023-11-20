#include<iostream>

using namespace std;

class Base{
    protected:
        int a;
    public:
        Base(int _a)
        {    a=_a;
        }
        void display();
};
void Base :: display()
{
    cout<<"The value of your a is "<<a;
}
/*---------------------------------------*/
class Derived : public Base
{   public:
        int square();
        // Derived( int b)
        // { a=b; }
};
int Derived :: square()
{   return a*a;
}

int main()
{   cout<<"There is only theory :(";
    Base b1(5);
    // Derived d1(5);
    return 0;
}