#include<iostream>

using namespace std;

//base class
class employee
{   public:
        int id;
        float salary;
        employee(int inid )
        {   id=inid;
            salary=100;
        }
        employee(){}
};

// derived class syntax
/*  class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
    members/method/etc..
*/

/*
notes:
1. by default visibility mode is private.
2. private visibility mode : public members of the base class becomes 
private members of the derived class.
3. public visibility mode : public members of the base class becomes 
public members of the derived class.
4. we cannot inherit private memebers of base class.

*/

// Creating a programmer class derived from employee base class.
class programmer : employee 
{   public:
        int languagecode;
        programmer(int inid)
        {   languagecode = 9;
            id=inid;
            // salary=900;
        }
        void getdata()
        {   cout<<id<<endl;
            cout<<salary;
        }
};
// if you made a derived class then it will automatically call the defaulat constructor of base class.
int main()
{   employee harry(1),happy(5);
    cout<<harry.salary<<endl;
    cout<<happy.salary<<endl;
    programmer skillF(2);
    cout<<skillF.languagecode<<endl;
    skillF.getdata();
    // cout<<skillF.id;  //it will give error because id is private mem. of programmer 

    return 0;
}