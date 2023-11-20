#include<iostream>

using namespace std;

class complex
{   int a,b;
    public:
        void getData()
        {   cout<<"The real part is "<<a<<endl;
            cout<<"The imaginary part is "<<b<<endl;
            cout<<a<<" + "<<b<<" i "<<endl<<endl;
        }
        void setData(int x,int y)
        {   a=x;
            b=y;
        }
};

int main()
{   complex c1;
    //complex* ptr=&c1;
    complex* ptr = new complex;
    (*ptr).setData(4,8);//Here pranthies is imp. because of higher precedence of dot operator.
    (*ptr).getData();
    // Arrow operator
    //setData() and getData() of the obj. which is pointed by ptr.
    ptr->setData(6,12); 
    ptr->getData();

    // Array of objects 
    complex* ptr1 = new complex[4];
    ptr1->setData(4,5); 
    ptr1->getData();

    (*(ptr+1)).setData(1,8);
    (*(ptr+1)).getData();

    (ptr1+2)->setData(5,7); 
    (ptr1+2)->getData();

    (ptr1+3)->setData(4,20); 
    (ptr1+3)->getData();
    
    /*(ptr1+4)->setData(92,11); 
    (ptr1+4)->getData();*/

    return 0;
}