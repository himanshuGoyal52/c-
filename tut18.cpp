#include<iostream>

using namespace std;

int factorial(int n)
{   if (n<=1)
    { return 1;}   
    return n * factorial(n-1);
}
// step process
//factorial(4) = 4 * factorial(3)
//factorial(4) = 4 * 3 * factorial(2)
//factorial(4) = 4 * 3 * 2 * factorial(1)
//factorial(4) = 4 * 3 * 2 * 1

int fib(int n)
{   if(n<2){return 1;} 
    return fib(n-2) + fib(n-1);
}
//fib(5)
//fib(3)+fib(4)
//fib(1)+fib(2)+fib(2)+fib(3)
//1+fib(0)+fib(1)+fib(0)+fib(1)+fib(1)+fib(2)
//1+1+1+1+1+1+fib(0)+fib(1)
//1+1+1+1+1+1+1+1=8

int main()
{   // factorial of a number
    // 6! = 6*5*4*3*2*1 = 720
    // n! = n * (n-1)!
    int a;
    cout<<"Enter a number : ";
    cin>>a;
    cout<<"The factorial of "<<a<<" is "<<factorial(a)<<endl;
    cout<<"The "<<a<<"th term of fibonacci series is "<<fib(a);
    return 0;
}