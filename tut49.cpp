#include<iostream>

using namespace std;
/*
Syntax for initialization list in contructor :
constructor (argrments-list) : initilization-section 
{   assignment + other code;
}

class Test
{   int a;
    int b;
    public:
        Test(int i,int j) : a(i) , b(j){constructor-body}

};
*/
class Test
{   int a;
    int b;
    // those variable are declared first they have to initialized first.
    // Here a will be initialized first.
    public:
        // Test(int i,int j) : a(i) , b(j)  /*initilization section*/
        // Test(int i,int j) : a(i) , b(i+j)
        // Test(int i,int j) : a(i) , b(2*j)
        // Test(int i,int j) : a(i) , b(a+j)
        // Test(int i,int j) : b(j) , a(i+b)  // Grabge value
        // Test(int i,int j) : a(i)
        Test(int i,int j) : a(i) , b(j)
        {   cout<<"Constructor executed"<<endl;
            cout<<"Value of a is "<<a<<endl;
            cout<<"Value of b is "<<b<<endl;
        }

};
int main()
{   Test t(4,6);

    return 0;
}