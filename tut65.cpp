#include<iostream>
// class templates with multiple parameters (one,two or more than two)
using namespace std;

/* // syntax : //
template <class T1,class T2>
class nameOfclass
{   // body
};
*/
template <class T1 , class T2>
class myclass
{   public:
        T1 data1;
        T2 data2;
        myclass(T1 a , T2 b)
        {   data1=a;
            data2=b;
        }
        void display()
        {   cout<< data1 <<" pagal hai kya ? "<< this->data2 ;
        }
};

int main()
{   myclass <int,float> obj(1,1.26);
    obj.display();

    return 0;
}