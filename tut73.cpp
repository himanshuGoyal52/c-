#include<iostream>
#include<map>
#include<string>
// maps || Associative containers ||
using namespace std;

int main()
{   map<string,int> marksMap;
    marksMap["Harry"] = 98;
    marksMap["Happy"] = 22;
    marksMap["Jack"] = 59;
    marksMap.insert({ {"anu",85} , {"Hitesh",45} });
    map<string,int> :: iterator iter;
    for (iter = marksMap.begin() ; iter != marksMap.end() ; iter++ )
    {   cout<<(*iter).first<<" "<<(*iter).second<<endl;
    }
    cout<<"Size of this map is "<<marksMap.size()<<endl;    
    cout<<"Maximum Size of this map will be "<<marksMap.max_size()<<endl;
    cout<<"The empty's return value is "<<marksMap.empty()<<endl;  // zero repersents that the map is not empty.

    return 0;
}
/******** use cppreference.com ********/