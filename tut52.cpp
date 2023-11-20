#include<iostream>

using namespace std;

class Kirana
{   int ID;
    float price;
    public:
        void setData(int a,int b)
        {   ID=a;
            price=b;
        }
        void getData()
        {   cout<<"Price of item ID "<<ID<<" is "<<price<<" rs"<<endl;
        }
};

int main()
{   // general store item [0]
    // veggies item [1]
    // hardware item [2]
    int id;
    float price;
    Kirana* ptr = new Kirana[3];
    Kirana* ptrTemp = ptr;
    for (int i = 0; i < 3; i++)
    {   cout<<"Enter ID and price of item "<<i+1<<endl;
        cin>>id;
        cin>>price;
        ptr->setData(id,price);    //(*ptr).setData(id,price);
        ptr++;
    }
    for (int i = 0; i < 3; i++)
    {   ptrTemp->getData();  
        ptrTemp++;
    }
    
    return 0;
}