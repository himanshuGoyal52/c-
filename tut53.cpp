#include<iostream>
// this keyword
using namespace std;

class A
{   int a;
    public:
        //void setData(int a) 
        A& setData(int a) 
        {   this->a=a;
            return *this;
        }
        void getData()
        {   cout<<"The value of a is "<<a<<endl;
        }
};

int main()
{   // this is a keyword which is a pointer which is points to the object which invokes the member fun
    A a;
    a.setData(5).getData();
    a.getData();
    return 0;
}