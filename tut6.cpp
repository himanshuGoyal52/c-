#include <iostream>

using namespace std;

int main()
{   //1 arithmetic operators
    
     int a=10,b=3;
    cout<<"following are the arithmetic operators :"<<endl;
    cout<<"The sum of a and b is :"<<a+b<<endl;
    cout<<"The sub of a and b is :"<<a-b<<endl;
    cout<<"The mul of a and b is :"<<a*b<<endl;
    cout<<"The divide of a and b is :"<<a/b<<endl;
    cout<<"The module of a and b is :"<<a%b<<endl;
    cout<<"The inceriment2 of a and b is :"<<a++<<endl;
    cout<<"The decriment2 of a and b is :"<<a--<<endl;
    cout<<"The inceriment1 of a and b is :"<<++a<<endl;
    cout<<"The decriment1 of a and b is :"<<--a<<endl;
    cout<<"\n";

   // 2 assingment operators --> used to assign values to variables
   //    int c=8,d=2;
   //    char _='h';

    /*3 comparison operators*/
    cout<<"following are the comparison operators :"<<endl;
    cout<<"the value of a == b :"<<(a==b)<<endl;
    cout<<"the value of a != b :"<<(a!=b)<<endl;
    cout<<"the value of a >= b :"<<(a>=b)<<endl;
    cout<<"the value of a <= b :"<<(a<=b)<<endl;
    cout<<"the value of a > b :"<<(a>b)<<endl;
    cout<<"the value of a < b :"<<(a<b)<<endl;
    cout<<"\n";

 /*3 logical operators*/
    cout<<"following are the logical operators :"<<endl;
    cout<<"the value of AND :"<<((a==b) && (a>b))<<endl;
    cout<<"the value of OR :"<<((a==b) || (a>b))<<endl;
    cout<<"the value of NOT :"<<(!(a==b))<<endl;


    return 0;
}

