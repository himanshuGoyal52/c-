#include<iostream>

using namespace std;

class employee
{   int id;
    static int count;   //static int count=100; // it give error
    public:
        void setData()
        {   cout<<"\nEnter the ID : ";
            cin>>id;
            count++;
        }
        void getData()
        {   cout<<"The ID of this employee is ";
            cout<<id<<" and this employee number "<<count<<endl;
        }
        static void getCount()
        {   // cout<<id;  // This will not happen because id var. is not static var.
            cout<<"The value of count is "<<count<<endl;
        }

};

int employee :: count; // default value is zero //int employee :: count=100; possible
int main()
{   employee harry;
    employee happy;
    employee gandu;
    // harry.id = 1;  // 
    // harry.count = 1;  // cannot do this as id and count are private
    harry.setData();
    harry.getData();

    employee :: getCount();

    happy.setData();
    happy.getData();

    employee:: getCount();

    gandu.setData();
    gandu.getData();

    employee:: getCount();

    return 0;
}