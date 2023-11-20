#include <iostream>

using namespace std;

class shop
{
    int itemId[3];
    int itemPrice[3];
    int counter;

public:
    void initcounter() { counter = 0; }
    void setprice();
    void disprice();
};

void shop :: setprice()
{
    cout << "Enter Id of your item no. " << counter + 1 << " : ";
    cin >> itemId[counter];
    cout << "Enter price of your item : ";
    cin >> itemPrice[counter];
    counter++;
}

void shop :: disprice()
{
    for (int i = 0; i < counter; i++)
    {
        cout << "Tne price of item with ID " << itemId[i] << " is " << itemPrice[i] << " rs." << endl;
    }
}

int main()
{
    shop dukaan;
    dukaan.initcounter();
    dukaan.setprice();
    dukaan.setprice();
    dukaan.setprice();
    dukaan.disprice();
    return 0;
}