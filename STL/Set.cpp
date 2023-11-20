#include<iostream>
#include<set>

using namespace std;

int main()
{   set<int> s;
    s.insert(5);
    s.insert(1);
    s.insert(6);
    s.insert(6);
    s.insert(0); // O(logn)

    for(auto i : s){
        cout<<i<<" ";
    }cout<<endl;

    set<int>::iterator it = s.begin();
    it++;
    it++;
    s.erase(it);
    for(auto i : s){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"Element 6 exist or not : "<<s.count(6)<<endl;
    cout<<"Element 10 exist or not : "<<s.count(10)<<endl;

    set<int>::iterator itr = s.find(1);
    cout<<"Value present at itr : "<<*itr<<endl;

    for(auto i = itr ; i != s.end() ; i++){
        cout<<*i<<" ";
    }cout<<endl;

    return 0;
}