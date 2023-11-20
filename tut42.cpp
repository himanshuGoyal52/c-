#include<iostream>
#include<cmath>
using namespace std;

/*
Create two classes :
1. Simple_Calculator - Take input of two numbers using a utility function
and performs +,-,*,/ and display the results using another function.

2. Scientific_Calculator - Take input of two numbers using a utility function
and performs any four scientific operation of your choice and display the 
results using another function.

3. Create another class(Hybrid_Calculator) and inherit it using these two classes 

Q1. What type of inheritance are you using ?
Q2. Which mode of inheritance are you using ?
Q3. Create an object of Hybrid_Calculator and display results of simple and scientific 
    calculator ?
Q4. How is code reusability implemented ? 
*/

class Simple_Calculator
{   protected:
        float value1,value2,res;
    public:
        void set_value(float a,float b)
        {   value1=a;
            value2=b;
        }
        void sum()
        {   res=value2+value1;
        }
        void sub()
        {   res=value2-value1;
        }
        void mul()
        {   res=value2*value1;
        }
        void div()
        {  res=value2/value1;
        }
        void dis()
        {   cout<<"Your answer is "<<res<<endl;
        }
};
/*----------------------------------------------------*/
class Scientific_Calculator
{   protected:
        float value,result;
    public:
        void set_value(float a)
        {   value=a;
        }
        void log()
        {   result=log10(value);
        }
        void sin()
        {   result=sinf(value);
        }
        void cos()
        {   result=cosf(value);
        }
        void exp()
        {   result=expf(value);
        }
        void display()
        {   cout<<"You answer is "<<result<<endl;
        }

};

class Hybrid_Calculator : public Simple_Calculator , public Scientific_Calculator
{   

};

int main()
{   Simple_Calculator s1;
    Scientific_Calculator s2;
    s1.set_value(5,8);
    s2.set_value(3.1415926);

    s1.sum();
    s1.dis();
    s1.sub();
    s1.dis();
    s1.mul();
    s1.dis();
    s1.div();
    s1.dis();

    s2.sin();
    s2.display();
    s2.cos();
    s2.display();
    s2.exp();
    s2.display();
    s2.log();
    s2.display();


    return 0;
}