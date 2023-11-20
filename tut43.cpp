#include<iostream>
#include<iomanip>
using namespace std;

class Base1
{   public:
        void greet()
        {   cout<<"How are you ?"<<endl;
        }

};

class Base2
{   public:
         void greet()
        {   cout<<"Kaise ho ?"<<endl;
        }

};


class Derived : public Base1 , public Base2
{   int a;
    public:
        void greet()
        {   Base1 :: greet();
        }

};
/*----------------------------------------------------------------*/

class Base
{   public:
        void say()
        {   cout<<"!! Hello World !!"<<endl;
        }
};

class Dase : public Base
{   int a;
    // Dase's new say() method will overwrite in say() of base class.
    public:
        void say()
        {   cout<<"!! Hello to my World !!"<<endl;
        } 
        // if say is in Dase class then it will run and if not then 
        // say of Base class will run . 

};

int main()
{   // First Ambiguity // 
    Base1 obj1;
    Base2 obj2;
    Derived obj3;
    obj1.greet();
    obj2.greet();
    obj3.greet();

    // Second Ambiguity //
    Base obj;
    Dase Obj;
    obj.say();
    Obj.say(); // Here ambiguity is itself resolved.

    return 0;
}