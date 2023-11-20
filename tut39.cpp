#include<iostream>

using namespace std;

class base 
{   protected:
        int a;  // a is a private type variable which can be inherited. 
    private:
        int b;

};
/*-----------------------------------------------------------------*/
/*
for a protected member :
            public derivation   private derivation   protected derivation     
private m :   not inherited   |  not inherited     |  not inherited 
protectedm:   protected       |  private           |  protected
public m  :   public          |  private           |  protected
*/
/*-----------------------------------------------------------------*/
class derived : protected base
{   

};

int main()
{   base b;
    derived d;
    // cout<<b.a;  // will not work because a is protected member of base class.
    // cout<<d.a;  // will not work because a is protected member of derived class.
    
    return 0;
}