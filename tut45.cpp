#include<iostream>

using namespace std;

class Students
{   protected:
        int roll_no;
    public:
        void set_roll_number(int a)
        {   roll_no=a;
        }
        void print_roll_number()
        {   cout<<"Your roll number is "<<roll_no<<endl;
        }
}; 
class Test : virtual public Students
{   protected:
        float maths , physics;
    public:
        void set_marks(float m , float p)
        {   maths=m;
            physics=p;
        }
        void print_marks()
        {   cout<<"Maths marks of roll number "<<roll_no<<" is "<<maths<<endl;
            cout<<"Physics marks of roll number "<<roll_no<<" is "<<physics<<endl;
        }    
};
class Sports : public virtual Students
{   protected:
        float score;   
    public:
        void set_score(float s)
        {   score=s;
        }
        void print_score()
        {   cout<<"Your PT score is "<<score<<endl;
        }
};

/*---------------------------------------------------------*/

class Result : public Test , public Sports
{   private:
        float Total;
    public:
        void display()
        {   Total = maths + physics + score;
            print_roll_number();
            print_marks();
            print_score();
            cout<<"Your total score is "<<Total<<endl;
        }

};

int main()
{   Result Happy;
    Happy.set_roll_number(420);
    Happy.set_marks(95.6,96.5);
    Happy.set_score(6);
    Happy.display();
    
    return 0;
}