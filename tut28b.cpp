#include<iostream>

using namespace std;

class c2; 

class c1
{   int val;
    public:
        void inData(int a)
        {
            val=a;
        }
        void print()
        {
            cout<<val<<endl;
        }
        friend void swap(c1 &,c2 &);
};

class c2
{   int val;
    public:
        void inData(int a)
        {
            val=a;
        }
        void print()
        {
            cout<<val<<endl;
        }
        friend void swap(c1 &,c2 &);
};

void swap(c1 &s , c2 &t)
{   int temp;
    temp = s.val;
    s.val = t.val;
    t.val = temp;

}

int main()
{   c1 a;
    c2 b;
    a.inData(5);
    a.print();
    b.inData(9);
    b.print();
    swap(a,b);
    cout<<"Now their values are swaped "<<endl;
    a.print();
    b.print();
    return 0;
}