#include<iostream>
#include<vector>

using namespace std;

int main()
{   vector<int> v;
    vector <int> v1(5,1);
    vector <int> v1_copy(v1);
    
    cout<<"Size , capacity : "<<v.size()<<","<<v.capacity()<<endl;
    v.push_back(1);
    cout<<"Size , capacity : "<<v.size()<<","<<v.capacity()<<endl;
    v.push_back(2);
    cout<<"Size , capacity : "<<v.size()<<","<<v.capacity()<<endl;
    v.push_back(3);
    cout<<"Size , capacity : "<<v.size()<<","<<v.capacity()<<endl;
    v.push_back(4);
    cout<<"Size , capacity : "<<v.size()<<","<<v.capacity()<<endl;
    v.push_back(5);
    cout<<"Size , capacity : "<<v.size()<<","<<v.capacity()<<endl;

    cout<<"Element at index 2nd : "<<v.at(4)<<endl; 

    cout<<"Front Element : "<<v.front()<<endl;
    cout<<"Last Element : "<<v.back()<<endl;

    cout<<"Before PoP"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;
    v.pop_back();
    cout<<"After PoP"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"Size , capacity : "<<v.size()<<","<<v.capacity()<<endl;
    v.clear(); // size : 0 , capacity : 8
    cout<<"Size , capacity : "<<v.size()<<","<<v.capacity()<<endl;


    return 0;
}