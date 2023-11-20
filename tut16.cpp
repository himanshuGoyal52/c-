#include<iostream>
// call by reference using pointers
using namespace std;
int sum(int a, int b){ 
       int c=a+b;      
       return c;
}
// this will not swap a and b
void swap(int a, int b){   // temp  a  b
    int temp = a;         //  4    4  5
    a=b;                  //  4    5  5
    b=temp;               //  4    5  4
}
//call by reference using pointers
void swappointers(int* a, int* b){   
    int temp = *a;         
    *a=*b;                  
    *b=temp;               
}
// call by reference using C++ reference variables
void swapReferenceVar(int &a, int &b){   
    int temp =  a;         
    a=b;                  
    b=temp;                
}
int main()
{   int x=4 , y=5;
    // cout<<"the sum of 4 and 5 is "<<sum(a,b);
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
//    swap(x,y); // this will not swap a and b
//    swappointers(&x,&y); // this will do (pointers reference)
   swapReferenceVar(x,y);  // this will also do (reference variables)
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
 
 
 
 
 
  return 0;
}