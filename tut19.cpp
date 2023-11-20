#include<iostream>

using namespace std;

int add(int a,int b)
{   cout<<"Using function with two arguments"<<endl;
    return a+b;
}

int add(int a, int b, int c)
{   cout<<"Using function with three arguments"<<endl;
    return a+b+c;
}

// volume of cylinder 
double vol(double r, double h)
{    return 3.1415926*r*r*h;   
}

// volume of cuboid 
double vol(double l, double b, double h)
{    return l*b*h;   
}

//volume of sphere
double vol(double r)
{   return 4/3*3.1315926*r*r*r;
}
int main()
{   cout<<"The sum of 3 and 6 is "<<add(3,6)<<endl;
    cout<<"The sum of 3, 7 and 6 is "<<add(3,7,6);
    double r,h;
    cout<<"Enter the radius of cylinder : ";
    cin>>r;
    cout<<"Enter the height of cylinder : ";
    cin>>h;
    cout<<"The volume of cylinder : "<<vol(r,h)<<endl;

    double l,b,h1;
    cout<<"Enter the lenth of cuboid: ";
    cin>>l;
    cout<<"Enter the breath of cuboid : ";
    cin>>b;
    cout<<"Enter the height of cuboid : ";
    cin>>h1;
    cout<<"The volume of cube : "<<vol(l,b,h1)<<endl;

    double r1;
    cout<<"Enter the radius of sphere : ";
    cin>>r1;
    cout<<"The volume of sphere : "<<vol(r)<<endl;
    return 0;
}