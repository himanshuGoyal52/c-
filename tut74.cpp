#include<iostream>
#include<functional>
#include<algorithm>
// funtion objects // also known as functor.
/*
It is function wrapped in a class so that it is available like an object.
*/

using namespace std;

int main()
{   int arr[] = {1,73,4,2,54,5};   
    // sort(arr,arr+4);
    sort(arr,arr+4,greater<int>());  // Here greater is function objects.
    for (int i = 0; i < 6; i++)
    {
        cout<<arr[i]<<" , ";
    }
    
    return 0;
}

/******** use cppreference.com ********/