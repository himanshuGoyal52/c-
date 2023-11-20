#include<iostream>
#include <string>
#include <bits/stdc++.h>
#include <algorithm>
#include <cmath>
using namespace std;



int main()
{   long int a=0;
    string s;
    cout<<"Enter the binary num : ";
    cin>>s;
    reverse(s.begin(),s.end());
    int size = s.size();
    for (int i = 0; i < s.size(); i++)
    {   if (s.at(i)=='1')
        {   a=a+pow(2,i);
            
        }
    
        
    }
    
    cout<<"Its decimal number : "<<a;
    

    return 0;
}