#include<iostream>

using namespace std;

int main()
{   // Basic Example
    int a=55;
    int* ptr=&a;
    *ptr=99;
    cout<<"The value of a is "<<*ptr<<endl;
    
    // New Keyword 
    // int* p = new int(40);
    float* p = new float(40.74);
    cout<<"The value at address p is "<<*p<<endl;
    cout<<p<<endl;

    int* arr = new int[3];//Complier please allocate three memory of int type.(dynamically)
    arr[0]= 10;
    *(arr+1) = 20;
    arr[2]= 30;
    delete[] arr;
    cout<<"The value of arr[0] is "<<arr[0]<<endl;
    cout<<"The value of arr[1] is "<<arr[1]<<endl;
    cout<<"The value of arr[2] is "<<arr[2]<<endl;
    // here the memory is dynamically allocated .... so the value of the address is different that we have seen earlier
    cout<<"The address of arr[0] is "<<arr<<endl;
    cout<<"The address of arr[1] is "<<arr+1<<endl;
    cout<<"The address of arr[2] is "<<arr+2<<endl;

    // Delete operator 


    return 0;
}