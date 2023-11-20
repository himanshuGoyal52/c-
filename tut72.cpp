#include<iostream>
#include<list>

using namespace std;

void display(list<int> &lst)
{   list <int> :: iterator it;
    for (it = lst.begin() ; it != lst.end()  ; it++ )
    {   cout<< *it<<" , ";
    
    }
    cout<<endl;
}

int main()
{   list <int> list1; // list of zero length.     
    list <int> list2(3);  // empty list of size three.
    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(1);
    list1.push_back(9);
    list1.push_back(12);
    
    // sorting the list
    list1.sort();

    /************list <int> :: iterator iter;
    iter = list1.begin();  // pointes the first element of list.
    cout<< *iter<<" , ";
    iter++;
    cout<< *iter<<" , ";
    // iter++;
    // cout<< *iter<<" , ";
    // iter++;
    // cout<< *iter<<" , ";
    // iter++;
    // cout<< *iter;   **************/
    //      ||
    display(list1);
    list1.pop_back(); // remove elements from back.
    display(list1);
    list1.pop_front();  // remove elements from front.
    display(list1);
    list1.remove(1); // remove your desired value.All 1 values are removed form this list.
    display(list1);

    /*---------------------------------------------------------*/
    list <int> :: iterator iter;
    iter = list2.begin();
    *iter = 45;
    iter++ ;
    *iter = 65;
    iter++ ;
    *iter = 85;
    iter++ ;
    display(list2);

    // Merging elements of two different list.
    list1.merge(list2);
    cout<<"After merging"<<endl;
    display(list1);

    // reversing the list.
    list1.reverse();
    display(list1);

    return 0;
}

/******** use cppreference.com ********/