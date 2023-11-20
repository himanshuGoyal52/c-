#include<iostream>
#include<map>

using namespace std;

int main()
{   map<int,string> m;
    m[1]="Himanshu";
    m[15]="Goyal";
    m[11]="HG";

    m.insert( {5,"Bheem"} );

    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }cout<<endl;

    cout<<"Finding 15 : "<<m.count(15)<<endl;

    cout<<"Erasing 15 element"<<endl;
    m.erase(15);
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }cout<<endl;

    auto it = m.find(5);
    for(auto i = it ; i != m.end() ; i++){
        cout<<(*i).first<<" "<<(*i).second<<endl;
    }

    return 0;
}