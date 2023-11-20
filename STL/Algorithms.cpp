#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{   vector<int> v;
    v.push_back(15);
    v.push_back(18);
    v.push_back(10);
    v.push_back(74);
    v.push_back(55);
    v.push_back(16);

    cout<<binary_search(v.begin() , v.end() , 16)<<endl;

    cout<<lower_bound( v.begin() , v.end() , 74) - v.begin() <<endl;
    cout<<upper_bound( v.begin() , v.end() , 15) - v.begin() <<endl;

    int a=3,b=5;
    cout<<max(a,b)<<endl;

    cout<<min(a,b)<<endl;

    swap(a,b);
    cout<<a<<" "<<b<<endl;

    string s = "abcdefghijklmnopqrstuvwxyz";
    reverse(s.begin(),s.end());
    cout<<s<<endl;

    rotate(v.begin() , v.begin() + 1 , v.end());
    for(int i : v){
        cout<<i<<" ";
    }cout<<endl;
    return 0;
}