#include<iostream>
#include<iomanip>
using namespace std;

// forward declaration
class calculator;



class complex
{   int a , b;
    // Individually declaring function of calculator as friend
    // friend int calculator :: sumReal(complex o1, complex o2);
    // friend int calculator :: sumComplex(complex o1, complex o2);

    //Alternative : declaring the calculator class as friend
    friend class calculator;
    public:
        void setNumber(int n1 , int n2)
        {   a = n1;
            b = n2;
        }
        void printNumber()
        {   cout<<"Your complex number is "<<setw(7)<<a<<"+"<<b<<"i"<<endl;
        }
        

};

class calculator
{   public:
        int add(int a , int b)
        {
            return a + b;
        }
        int sumReal(complex , complex );
        
        int sumComplex(complex , complex );
        

};

int calculator :: sumReal(complex o1, complex o2)
        {
            return o1.a + o2.a;
        }

int calculator :: sumComplex(complex o1, complex o2)
        {
            return o1.b + o2.b;
        }

int main()
{   complex o1 , o2;
    calculator calc;
    o1.setNumber(2,5);
    o1.printNumber();
    o2.setNumber(1,5);
    o2.printNumber();
    int res = calc.sumReal(o1, o2);
    int res1 = calc.sumComplex(o1, o2);
    cout<<"The sum of complex number is "<<res<<"+"<<res1<<"i";


    return 0;
}