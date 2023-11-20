#include<iostream>

using namespace std;

class BankDeposit
{   int principal;
    int years;
    float interestRate;
    float returnValue;
    public:
        // Blank constructor
        BankDeposit(){}  //If it is not then code will show error for those objects who has no arguments.bd3
        BankDeposit(int p,int y,float r);
        BankDeposit(int p,int y,int r);
        void show();

};

BankDeposit :: BankDeposit(int p,int y,float r)
{   principal=p;
    years=y;
    interestRate=r;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue*(1+interestRate);
    }
}

BankDeposit :: BankDeposit(int p,int y,int r)
{   principal=p;
    years=y;
    interestRate=float(r)/100;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue*(1+interestRate);
    }
}

void BankDeposit :: show()
{   
    cout<<endl<<"Principal amount was "<<principal<<endl;
    cout<<"Return value after "<<years<<" is "<<returnValue<<endl;

}

int main()
{   BankDeposit bd1,bd2,bd3;
    int p,y;
    float r;
    int R;

    bd3.show(); // Constructor one ko use krre ga.

    cout<<"Enter your principal amount: ";
    cin>>p;
    cout<<"Enter number of years you want to invest : ";
    cin>>y;
    cout<<"Enter the rate (real) : ";
    cin>>r;

    bd1 = BankDeposit(p,y,r);
    bd1.show();

    cout<<"Enter your principal amount: ";
    cin>>p;
    cout<<"Enter number of years you want to invest : ";
    cin>>y;
    cout<<"Enter the rate in % : ";
    cin>>R;

    bd2 = BankDeposit(p,y,R);
    bd2.show();


    return 0;
}