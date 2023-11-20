#include<iostream>

using namespace std;

// float funcAverage(int a,int b)
// {   float avg = (a+b)/2.0;
//     return avg;
// }
// float funcAverage2(int a, float b)
// {   float avg = (a+b)/2;
//     return avg;
// }  /*** Instead of this we can use function templates. ***/

template <class f1,class f2>
float funcAverage(f1 a,f2 b)
{   float avg = (a+b)/2.0;
    return avg;
}

template <class T>
void swapp (T &a,T &b)
{   T temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{   float a;
    a = funcAverage(5,6);
    cout<<"The average of these number is "<<a<<endl;

    int x = 5,y = 7;
    swapp<int>(x,y);
    cout<<"After swaping"<<endl<<x<<endl<<y;

    return 0;
}