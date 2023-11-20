#include<iostream>
//multilevel inheritance.
using namespace std;

class students 
{   protected:
        int roll_number;
    public:
        void set_roll_number(int);
        void get_roll_number(void);

};

void students :: set_roll_number(int a)
{   roll_number=a;
}
void students :: get_roll_number()
{   cout<<"Your roll number is "<<roll_number<<endl;
}
/*--------------------------------------------*/
class exam : public students
{   protected:
        float maths;
        float physics;
    public:
        void set_marks(float , float);      
        void get_marks(void);
};

void exam :: set_marks(float m,float p)
{   maths=m;
    physics=p;
}
void exam :: get_marks()
{   cout<<"Your math marks is "<<maths<<" / 100"<<endl;
    cout<<"Your physics marks is "<<physics<<" / 100"<<endl;
}
/*-------------------------------------------------*/
class result : public exam
{   float percentage;
    public:
        void displayResult()
        {   get_roll_number();
            get_marks();
            cout<<"Your percentage is "<<(maths+physics)/2<<" %"<<endl;
        
        }

};

int main()
{   result hima;
    hima.set_roll_number(420);
    hima.set_marks(94.0,90.0);
    hima.displayResult();
    return 0;
}
/*
notes:
//if we are inheriting B from A and C from B : A ---> B ---> C//
1. A is the base class for B and B is the base class for C.
2. A --> B --> C is called inheritance path.

*/