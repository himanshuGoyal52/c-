#include<iostream>
#include<stack>

using namespace std;

int main()
{   stack<string> s;
    s.push("Himanshu");
    s.push("Goyal");
    s.push("HG");
    cout<<"Top Element : "<<s.top()<<endl;

    s.pop();
    cout<<"Now top Element : "<<s.top()<<endl;

    cout<<"Size : "<<s.size()<<endl;

    cout<<"Empty or not : "<<s.empty()<<endl;
    return 0;
}