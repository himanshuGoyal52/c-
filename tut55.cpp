#include<iostream>

using namespace std;
class Baseclass
{   public:
        int var_base=4;
        void display()
        {   cout<<"Displaying Base class variable var_base : "<<var_base<<endl;
        }

};

class Derivedclass : public Baseclass
{   
    public:
        int var_derived=8;
        void display()
        {   cout<<"Displaying Base class variable var_base : "<<var_base<<endl;
            cout<<"Displaying derived class variable var_derived : "<<var_derived<<endl;
        }
        
};

int main()
{   Baseclass* base_class_pointer;     // pointer is of base class  
    Baseclass obj_base;
    Derivedclass obj_derived;          // but obj is of derived class
    base_class_pointer = &obj_derived; //it is permited (pointing base class pointer to derived class)
    base_class_pointer->var_base=34;
    base_class_pointer->display();     // here late binding is going on.
    //base_class_pointer->var_derived = 134; // will throw an error 

    Derivedclass* derived_class_pointer;
    derived_class_pointer=&obj_derived;
    derived_class_pointer->var_base=44;
    derived_class_pointer->var_derived=55;
    derived_class_pointer->display(); // display of derived class will run because pointer is of derived class


    return 0;
}