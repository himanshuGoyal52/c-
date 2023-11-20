#include<iostream>

using namespace std;

int sum(int x,int y)
{   int z;   
    z=x+y;
    return z;
}

int sub(int x, int y)
{   int z;
    z=x-y;
    return z;    
}

int mul(int x ,int y)
{   int z;
    z=x*y;
    return z;
}

int dev(int x ,int y)
{   int z;
    z=x/y;
    return z;
}
int main()
{   cout<<"If you want to do arithmetic operations then enter any : ";
    char p;
    cin>>p;
    if(p=='+')
    {   int a,b;
        cout<<"enter first number : ";
        cin>>a;
        cout<<"enter second number : ";
        cin>>b;
        cout<<"Your answer is : "<<sum(a,b);

    }
    if (p=='-')
    {   int a,b;
        cout<<"enter first number : ";
        cin>>a;
        cout<<"enter second number : ";
        cin>>b;
        cout<<"Your answer is : "<<sub(a,b);

    }
    if (p=='*')
    {   int a,b;
        cout<<"enter first number : ";
        cin>>a;
        cout<<"enter second number : ";
        cin>>b;
        cout<<"Your answer is : "<<mul(a,b);
    }
    if (p=='/')
    {   int a,b;
        cout<<"enter first number : ";
        cin>>a;
        cout<<"enter second number : ";
        cin>>b;
        cout<<"Your answer is : "<<dev(a,b);
    }
   
    return 0;
}