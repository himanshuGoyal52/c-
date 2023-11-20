#include<iostream>

using namespace std;

class employee
{   int ID;
    int salary;
    public:
        void setID()
        {   salary = 250;
            cout<<"Enter ID of employee : ";
            cin>>ID;
        }
        void getID()
        {   cout<<"The ID of this employee is "<<ID<<endl<<endl;
        }

};

int main()
{   //employee rahul,happy,jatin,sahil;
    // happy.setID();
    // happy.getID();
    employee fb[4];
    for (int i = 0; i < 4; i++)
    {   fb[i].setID();
        fb[i].getID();
    }
    

    return 0;
}