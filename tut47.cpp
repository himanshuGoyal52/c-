#include<iostream>
#include<cmath>
// Solution of question given in tut42.cpp//
using namespace std;

/*
Create two classes :
1. Simple_Calculator - Take input of two numbers using a utility function
and performs +,-,*,/ and display the results using another function.

2. Scientific_Calculator - Take input of two numbers using a utility function
and performs any four scientific operation of your choice and display the 
results using another function.

3. Create another class(Hybrid_Calculator) and inherit it using these two classes 

Q1. What type of inheritance are you using ? --> Multiple inheritance 
Q2. Which mode of inheritance are you using ? --> public
Q3. Create an object of Hybrid_Calculator and display results of simple and scientific 
    calculator ?
Q4. How is code reusability implemented ? 
*/

class Simple_Calculator
{   float a,b;
    public:
        void GetDatas()
        {   cout<<"Enter the value of a "<<endl;
            cin>>a;
            cout<<"Enter the value of b "<<endl;
            cin>>b;
        }
        void performOperationss()
        {   cout<<"The value of a + b is "<<a+b<<endl;
            cout<<"The value of a - b is "<<a-b<<endl;
            cout<<"The value of a * b is "<<a*b<<endl;
            cout<<"The value of a / b is "<<a/b<<endl;
        }
};
class Scientific_Calculator
{   float a;
    public:
        void GetDataS()
        {   cout<<"Enter the value of a "<<endl;
            cin>>a;
        }
        void performOperationsS()
        {   cout<<"The value of sin(a) is "<<sin(a)<<endl;
            cout<<"The value of cos(a) is "<<cos(a)<<endl;
            cout<<"The value of exp(a) is "<<exp(a)<<endl;
            cout<<"The value of log(a) is "<<log(a)<<endl;
        }

};
class Hybrid_Calculator : public Simple_Calculator , public Scientific_Calculator
{   public:

};

int main()
{  /* Simple_Calculator calc;
    calc.GetData();
    calc.performOperationss();*/
    Hybrid_Calculator calc;
    calc.GetDatas();
    calc.performOperationss();
    calc.GetDataS();
    calc.performOperationsS();

    return 0;
}