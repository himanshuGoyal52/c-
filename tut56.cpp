#include<iostream>
// virtual function : default nature(display of base class) ko change krr ne ke liye|
using namespace std;
class Baseclass
{   public:
        int var_base=4;
        virtual void display()
        {   cout<<"1. Displaying Base class variable var_base : "<<var_base<<endl;
        }
        // here we make it virtual funtion so that display of derived class will run at run-time 
};

class Derivedclass : public Baseclass
{   
    public:
        int var_derived=8;
        void display()
        {   cout<<"2. Displaying Base class variable var_base : "<<var_base<<endl;
            cout<<"2. Displaying derived class variable var_derived : "<<var_derived<<endl;
        }
        
};
// binding is at run time or late binding
int main()
{   Baseclass* base_class_pointer;       
    Baseclass obj_base;
    Derivedclass obj_derived;          
    base_class_pointer = &obj_derived;
    base_class_pointer->var_base=44;
    base_class_pointer->display();

    return 0;
}