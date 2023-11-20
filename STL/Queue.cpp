#include<iostream>
#include<queue>

using namespace std;
// FIFO // 
int main()
{   queue<string> q;
    q.push("Himanshu");
    q.push("Goyal");
    q.push("Happy");

    cout<<"Size before pop : "<<q.size()<<endl;

    cout<<"First Element : "<<q.front()<<endl;

    q.pop();
    cout<<"Now first Element : "<<q.front()<<endl;

    cout<<"Size after pop : "<<q.size()<<endl;

    return 0;
}