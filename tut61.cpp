#include<iostream>
#include<fstream>
// Here we are using sample60.txt and sample60b.txt
// Sample program
using namespace std;



int main()
{   // connecting our file with hout stream
    ofstream hout("sample60.txt"); 

    // Creating a name string and filling it with the string entered by the user.   
    string name;
    cout<<"Enter your name : ";
    cin>>name;
    
    // writing a string to the file 
    hout<<"My name is "+name;

    // now the link is brokem betweem program and txt file
    hout.close();

    ifstream hin("sample60.txt");
    string content;
    //hin>>content;
    getline(hin,content);
    cout<<"The content of this file is :  \n"<<content;
    hin.close();


    return 0;
}