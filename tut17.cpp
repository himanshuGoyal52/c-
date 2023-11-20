#include<iostream>

using namespace std;

inline int product(int a, int b)
{   //static int c=0; // this executes only once 
    //c=c+1; // next time this function is run the value of c will be retained
    return a*b;
}

float moneyReceived(int currentMoney ,float factor=1.04) // here 1.04 is default argument , if no value is given then 1.04
{   return currentMoney*factor;
}

int main()
{    int a, b;
    cout<<"enter the value of a and b below \n";
     cin>>a>>b;
     cout<<"the product of a and b is "<<product(a,b)<<endl;
     cout<<"the product of a and b is "<<product(a,b)<<endl;
     cout<<"the product of a and b is "<<product(a,b)<<endl;
     cout<<"the product of a and b is "<<product(a,b)<<endl;
     cout<<"the product of a and b is "<<product(a,b)<<endl;
     cout<<"the product of a and b is "<<product(a,b)<<endl;
     cout<<"the product of a and b is "<<product(a,b)<<endl;
    int money;
    cout<<"enter your current money in no bank : ";
    cin>>money;
    cout<<"for NOM log : if you have "<<money<< " rs in your bank account then you will recive "<<moneyReceived(money)<<" rs after one year.\n";
    cout<<"for VIP log : if you have "<<money<< " rs in your bank account then you will recive "<<moneyReceived(money,1.1)<<" rs after one year.";
    return 0;
}