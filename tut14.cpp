#include<iostream>

using namespace std;
//1. struct
/*typedef struct employee
{
    int eid; //4 bytes
    char favchar; //1 bytes
    float salary; //4 bytes
    // total 9 bytes
}ep;*/
//2. union
// union money
// {
//     /* data */
//     int rice; 
//     char car;
//     float pounds;
//     //total 4 bytes are allocated (maximum of all data type) one at a time
// };

int main()
{   /*ep harry;
    struct employee happy;
    struct employee sahil;
    harry.eid=1;
    harry.favchar='g';
    harry.salary=75000;

    cout<<harry.eid<<endl;
    cout<<harry.favchar<<endl;
    cout<<harry.salary<<endl;*/

  /*  union money m1;
    m1.rice=5;
    m1.car='h';
    cout<<m1.car<<endl;*/
  
//3. enum
  enum meal{breakfast, lunch, dinner};
  cout<<breakfast<<endl;
  cout<<lunch<<endl;
  cout<<dinner<<endl;
  meal m1=breakfast,m2=dinner;
  cout<<m1<<" "<<m2;

 
 
 
  
  return 0;
}