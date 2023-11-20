#include<iostream>
#include<fstream>   // include those classes to deal with files.
/*  The useful classes for working with files in C++ are :
1.  fstreambase
2.  ifstream --> derived form fstreambase
3.  ofstream --> derived from fstreambase 
*/

/*
In order to work with files in C++ , you have to open it.
Primarily , There are two ways to open a file:
1. using a constructor.
2. using the member function open() of the class.
*/
using namespace std;

int main()
{     string st="Happy Bhai"; 
      // Opening files using constructor and writing it.
      ofstream out("sample60.txt");  // Write operation
      out<<st;
 
    string st2;
    // Opening files using constructor and reading from it.
    ifstream in("sample60b.txt"); // reading operation
    // in>>st2;   // it will not work properly because of space and new line char.
    getline(in,st2);
    cout<<st2<<endl;
    getline(in,st2);
    cout<<st2<<endl;
    getline(in,st2);
    cout<<st2;
    


    // for practice .... i am doing this yooo >_<
    ofstream out2;
    string al="yooo my name is himanshu goyal";
    out2.open("hhap.txt");
    out2<<al;
        
    return 0;
}