#include <iostream>

using namespace std;
int c=45;
int main()
{  //1 built in data types 
     int a,b,c;
  cout<<"put first value :";
  cin>>a; 
  cout<<"put second value :";
  cin>>b;
  c=a+b;
  cout<<"the sum is :"<<c<<endl;
  cout<<"the global c is :"<<::c<<endl;

  // 2 Literals (to find size)
  float e=34.5f;
  long double d=34.5l;
  //34.5 //it is a double (by default)
  //34.5f //it is a float
  cout<<"the value of e is :"<<e<<endl<<"the value of d is :"<<d<<endl;
  cout<<"the size of 34.5 is "<<sizeof(34.5)<<endl;
  cout<<"the size of 34.5f is "<<sizeof(34.5f)<<endl;
  cout<<"the size of 34.5F is "<<sizeof(34.5F)<<endl;
  cout<<"the size of 34.5l is "<<sizeof(34.5l)<<endl;
  cout<<"the size of 34.5L is "<<sizeof(34.5L)<<endl;

  // 3 reference variables  //nick name
   float x=455;
   float &y=x;
   cout<<x<<endl;
   cout<<y<<endl;
  
   // 4 type casting
   int q=45;
   float p=45.98;
   cout<<"the value is :"<<(float)q<<endl;
   cout<<"the value is :"<<int(p)<<endl;
   int o=(int)p;
   cout<<"this experssion is "<<q+p<<endl;
   cout<<"this experssion is "<<q+(int)p<<endl;
   cout<<"this experssion is "<<q+int(p)<<endl;
   



   return 0;
}