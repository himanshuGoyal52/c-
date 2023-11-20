#include<iostream>

using namespace std;

template <class f>
class happu
{   f aloo;
    public:
        happu(f a){aloo = a;}
        void display()
        {   cout<<"your aloo value is "<<aloo<<endl;
        }
}; 

int main()
{   happu<int>himanshu(4);
    happu<float>himanshu3(4.5);
    himanshu.display();
    himanshu3.display();
    
    return 0;
}