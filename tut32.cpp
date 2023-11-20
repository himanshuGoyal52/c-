#include<iostream>

using namespace std;

class simple
{   int data1,data2;
    public:
        simple(int a,int b=9)
        {   data1=a;
            data2=b;
        }
        void print()
        {   
            cout<<"The data of o1 object of class simple is "<<data1<<","<<data2;
        }
};

int main()
{   simple o1(2);  // simple o1(2,0);
    o1.print();
    return 0;
}
