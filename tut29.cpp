#include<iostream>

using namespace std;

class complex
{   // Creating a constructor 
    // Constructor is a special member function with the same name as of class
    // It is automatically invoked whenever an object is created
    // It is used to initializ the objects of the class
    int a,b;
    public:
        complex(void);  // Contructor declaration // No need to define return type 
        void print(void)
        {
            cout<<"The value of complex number is "<<a<<"+"<<b<<"i"<<endl;
        }
};

complex :: complex()  //---> This is a default constructor as it takes no parameter
{   a = 0;
    b = 0;
    //cout<<"Hello wrold";  --> should not be written
}

int main()
{   complex c,c1,c2,c3;
    c.print();
    c1.print();
    c2.print();
    c3.print();
    
    return 0;
}

// Characteristics of contructor :
// 1. It should be declared in the public section of the class.
// 2. They are automatically invoked whenever the object is created.
// 3. Do not have return values and do not have return types.
// 4. It can have default arguments.
// 5. We can not refer to their address. 
