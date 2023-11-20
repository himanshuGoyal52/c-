#include <iostream>
#include <iomanip>
using namespace std;

int main()
{ // 1 constants in c++
     const int a=45;
    cout<<"the value of a was "<<a<<endl;
    //a=34;
    cout<<"the value of a is "<<a<<endl; 
    cout<<"\n";

 // 2 manipulators in c++   
    int b=3 ,c=78 , d=1233;
    cout<<"The value of b without setw is "<<b<<endl; 
    cout<<"The value of c without setw is "<<c<<endl; 
    cout<<"The value of d without setw is "<<d<<endl; 
    cout<<"\n";
    cout<<"The value of b with setw is "<<setw(4)<<b<<endl;
    cout<<"The value of c with setw is "<<setw(4)<<c<<endl;
    cout<<"The value of d with setw is "<<setw(4)<<d<<endl;
    cout<<"\n";   
//3 operator precedence
   int e=3,f=4;
   int g=(3*e)+f;
   cout<<g;
   return 0;
}