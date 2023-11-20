#include<iostream>
// Multiple Inheritance //
using namespace std;

/*Syntax of Multiple Inheritance :
class DerivedC : visibility-mode base-1 , visibility-mode base-2 [,and so on]
{
    body of Derived class   
};
*/

class Base1 
{   protected:
        int base1int;
    public:
        void set_base1int(int a)
        {   base1int=a;
        }

};
/*-------------------------------------------*/
class Base2 
{   protected:
        int base2int;
    public:
        void set_base2int(int a)
        {   base2int=a;
        }

};
/*----------------------------------------------*/
class Derived : public Base1 , public Base2
{   public:
        void show()
        {   cout<<"The value of Base1 is "<<base1int<<endl;
            cout<<"The value of Base2 is "<<base2int<<endl;
            cout<<"The sum of these value is "<<base1int+base2int<<endl;
        }
        
};
/*---------------------------------------------------------------------*/
/*
The inherited Derived class will look something like this :
class Derived
{   protected:
        int base1int;
        int base2int; 
    public:
        void set_base1int(int a)
        {   base1int=a;
        }
         void set_base2int(int a)
        {   base2int=a;
        }
        void show()
        {   cout<<"The value of Base1 is "<<base1int<<endl;
            cout<<"The value of Base2 is "<<base2int<<endl;
            cout<<"The sum of these value is "<<base1int+base2int<<endl;
        }
        
};
*/

int main()
{   Derived D1;
    D1.set_base1int(2);
    D1.set_base2int(5); 
    D1.show();      

    return 0;
}