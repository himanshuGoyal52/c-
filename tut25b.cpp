#include<iostream>
#include<iomanip>
using namespace std;

class complex
{   int a;
    int b;

    public:
        void setData(int v1 , int v2)
        {   a = v1;
            b = v2;
        }
        void setDataBySum(complex o1 , complex o2)
        {   a = o1.a + o2.a;
            b = o1.b + o2.b;
        }
        void print()
        {   cout<<"Your complex number is "<<a<<"+i"<<b<<endl;

        }
        void print1()
        {   cout<<"Your sum of two complex number is "<<a<<"+i"<<b<<endl;

        }
};

int main()
{   complex c1 , c2 , c3;
    c1.setData(1 , 2);
    c1.print();

    c2.setData(3 , 4);
    c2.print();
    
    c3.setDataBySum(c1 , c2);
    c3.print1();

    return 0;
}