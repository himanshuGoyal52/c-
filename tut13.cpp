#include<iostream>

using namespace std;

int main()
{    // array example
     int marks[4]={83,44,54,78};
     
     cout<<marks[0]<<endl;
     cout<<marks[1]<<endl;
     marks[2]=656; // you can change the value of arrays
     cout<<marks[2]<<endl;
     cout<<marks[3]<<endl;
 
     int mathmarks[4];
     mathmarks[0]=83;
     mathmarks[1]=44;
     mathmarks[2]=54;
     mathmarks[3]=78;
     cout<<"these are math marks"<<endl;
     cout<<mathmarks[0]<<endl;
     cout<<mathmarks[1]<<endl;
     cout<<mathmarks[2]<<endl;
     cout<<mathmarks[3]<<endl;

     for (int i = 0; i < 4; i++)
     {
         cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
     }
     // pointers and arrays
     int* p=marks;
     cout<<"The value at marks[0] is "<<*p<<endl;
     cout<<"The value at marks[1] is "<<*(p+1)<<endl;
     cout<<"The value at marks[2] is "<<*(p+2)<<endl;
     cout<<"The value at marks[3] is "<<*(p+3)<<endl;
     cout<<"The adderss of marks[0] is "<<marks<<endl;
     cout<<"The adderss of marks[1] is "<<(marks+1)<<endl;
     cout<<"The adderss of marks[2] is "<<(p+2)<<endl;
     cout<<"The adderss of marks[3] is "<<(p+3)<<endl;
     
     cout<<*(p++);
     cout<<*(p++);
     cout<<*(p);
     cout<<*(++p);

  return 0;
}