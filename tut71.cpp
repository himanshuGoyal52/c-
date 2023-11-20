#include<iostream>
#include<vector>
// vectors : it is used when we do not have to define the size of an array
using namespace std;
template <class t>
void display(vector<t> &v1)
{   cout<<"Displaying this vector"<<endl<<endl;
    for (int i = 0; i < v1.size(); i++)
    {   cout<<v1[i]<<" "; // cout<<v1.at(i)<<" "; // can also be used.
    }   
    cout<<endl;
}

int main()
{   // Ways to create a vector 
    vector<int> vec1; // zero length integer vector
    int size;
    cout<<"Enter the size of vector : ";
    cin>>size;
    for (int i = 0; i < size; i++)
    {   int ele;
        cout<<"Enter an element to add to this vector : ";
        cin>>ele;
        vec1.push_back(ele);
    }
    //vec1.pop_back(); // remove the last element of vector. 
    display(vec1);
    vector<int> :: iterator iter = vec1.begin();
    vec1.insert(iter+1,5,566);
    display(vec1);

    // second method 
    vector <char> vec2(4); // character-vector of length four.
    vector <char> vec3(vec2);  // character-vector of length four from vec2
    vector <int> vec4(6,3);  // six elements vector of 3's
    vec2.push_back('g');
    //display(vec1);
    // display(vec2);
    // display(vec3);
    display(vec4);
    cout<<vec4.size();


    return 0;
}