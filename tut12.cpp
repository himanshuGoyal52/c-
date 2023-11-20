#include<iostream>

using namespace std;

int main()
{ // What is a pointer ? ----> it is a data type : which holds the address of other data type
    int a=3;
    int* b=&a;
// address of operator ---> &

   cout<<"the address of a is : "<<b<<endl;
   cout<<"the address of a is : "<<&a<<endl;
 
 // dereference of operator ---> *
   cout<<"the value at address b is : "<<*b<<endl;
 
 // pointer to pointer
   int** c=&b;
   cout<<"the address of b is : "<<&b<<endl;
   cout<<"the address of b is : "<<c<<endl;
   cout<<"the value at address c is : "<<*c<<endl;
   cout<<"the value at address value at(value at c) is :"<<**c;
     return 0;
}