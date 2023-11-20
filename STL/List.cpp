#include<iostream>
#include<list>

using namespace std;

int main()
{   list<int> l;
    list<int> l1(5,100);
    for(int i:l1){
        cout<<i<<" ";
    }cout<<endl;
    l.push_back(1);
    l.push_front(11);
    for(int i:l){
        cout<<i<<" ";
    }cout<<endl;
    list<int> l_copy(l);
    for(int i:l_copy){
        cout<<i<<" ";
    }cout<<endl;

    l.erase(l.begin());
    cout<<"After erase "<<endl;
    for(int i:l){
        cout<<i<<" ";
    }cout<<endl;
    cout<<"Size of list : "<<l.size()<<endl;

    return 0;
}