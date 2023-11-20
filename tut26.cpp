#include<iostream>

using namespace std;

class complex
{   int a , b;
    public:
        void setNumber(int n1 , int n2)
        {   a = n1;
            b = n2;
        }
        void printNumber()
        {   cout<<"Your complex number is "<<a<<"+"<<b<<"i"<<endl;
        }
        // below line means that sumComplex funtion is allowed to do anything with my private members
        friend complex sumComplex(complex o1 , complex o2);

};

complex sumComplex(complex o1 , complex o2)  // this is a not a member of complex class // but it is friend fun of class
{   complex o3;
    o3.setNumber( (o1.a + o2.a) , (o1.b + o2.b) );
    return o3; 

} // this is not the member of above class even after making it friend

int main()
{   complex c1,c2,sum;
    c1.setNumber(1,4);
    c1.printNumber();

    c2.setNumber(5,8);
    c2.printNumber();

    sum = sumComplex(c1,c2);
    sum.printNumber();

    return 0;
}

/* Properties of friend functions 
1. not in the scope of class
2. since it is not in the scope of the class it cannot be call from the object of that class
3. can be invoked without the help of any object
4. usually containts the objects as argument
5. can be declared inside public or private section of the class //friend statment
6. it cannot access the members directly by their names and need object_name.member_name to access any member

*/