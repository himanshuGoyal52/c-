#include<iostream>

using namespace std;
// function prototypes
// type-function name-(arguments);
//int sum(int a,int b); --> acceptable
//int sum(int a, b); --> not acceptable
//int sum(int ,int ); --> acceptable



void g();
int sum(int a,int b) ;

int main()
{  int num1, num2;
   cout<<"enter num1 : ";
   cin>>num1;
   cout<<"enter num2 : ";
   cin>>num2;
   cout<<"the sum is : "<<sum(num1 ,num2)<<endl;
   g();
   cout<<sum(num1 , num2);
 // num1 and num2 are actual parameters
 
 
 
 
 
  return 0;
}

 int sum(int a,int b) 
{   int c=a+b;
    return c;
    // a and b are formal parameters and they are taking values from actual parameters
}
void g()
{
    cout<<"hello, good morning ";
}