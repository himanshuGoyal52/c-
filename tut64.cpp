#include<iostream>

using namespace std;

template <class Data>
class vector
{   int size;
    public:
        Data* arr;
        vector(Data m)
        {   size = m; 
            arr= new Data[size]; 
        }
        Data DotProduct(vector &v)
        {   Data d=0;   
            for (int i = 0; i < size; i++)
            {   d += this->arr[i] * v.arr[i];   
            }  
            return d;
        }
};

int main()
{   vector <int> v1(3);   
    v1.arr[0]=4;
    v1.arr[1]=5;
    v1.arr[2]=1;
    vector <int> v2(3);   
    v2.arr[0]=7;
    v2.arr[1]=0;
    v2.arr[2]=3;

    int a = v1.DotProduct(v2);
    cout<<a<<endl;

    vector <float> v3(3);   
    v3.arr[0]=4.3;
    v3.arr[1]=5.0;
    v3.arr[2]=1.3;
    vector <float> v4(3);   
    v4.arr[0]=7.9;
    v4.arr[1]=0.33;
    v4.arr[2]=3.4;

    float b = v3.DotProduct(v4);
    cout<<b<<endl;

    return 0;
}