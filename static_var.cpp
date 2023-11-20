#include<iostream>

using namespace std;

int fun(){
    static int count = 0;
    count++;
    return count;
}

int main()
{   cout<<fun()<<endl;
    cout<<fun();
    return 0;
}