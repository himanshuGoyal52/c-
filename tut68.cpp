#include<iostream>

using namespace std;

template <class T>
class Harry
{   public:
        T data;
        Harry(T a)
        {   data = a;
        }
        void display();
};
template <class T>
void Harry<T> :: display()
{   cout<<data;    
}
/*----------------------------------*/
void func(int a)
{   cout<<endl<<"I am first function "<<a<<endl;
}
template <class t>
void func(t a)
{   cout<<"I am templatised function "<<a<<endl;
}
template <class t>
void func2(t a)
{   cout<<"I am templatised function "<<a<<endl;
}

int main()
{   Harry <int> h(4);   
    cout<<h.data<<endl;
    h.display();

    func(2); // Exact match takes the highest priority.
    func2(5.6);
    return 0;
}