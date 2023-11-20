#include<iostream>
#include<deque>

using namespace std;

int main()
{   deque<int> d;
    d.push_back(12);
    d.push_front(11);
    d.push_front(10);
    for(int i:d){
        cout<<i<<" ";
    }cout<<endl;
    d.pop_back();
    d.pop_front();
    for(int i:d){
        cout<<i<<" ";
    }cout<<endl;
    cout<<"Element at zero index : "<<d.at(0)<<endl;

    cout<<"Front : "<<d.front()<<endl;
    cout<<"Last : "<<d.back()<<endl;

    cout<<"Empty or not : "<<d.empty()<<endl;

    // iterator of starting is d.begin()
    // iterator of ending is d.end()
    cout<<"Befor erase "<<d.size()<<endl;
    d.erase(d.begin(),d.end());
    cout<<"After erase "<<d.size()<<endl;
    return 0;
}