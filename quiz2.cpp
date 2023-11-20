#include<iostream>
#include<math.h>
using namespace std;

class point
{   int x,y;
     public:
        point(int a,int b)
        {   x = a;
            y = b;
        }
        void displayPoint()
        {   cout<<"The point is ("<<x<<","<<y<<")"<<endl;
        
        }
        void distance(point , point);

};

//create a function which takes 2 points objects and computes the distance between them

void point::distance(point o1, point o2)
{   float dis;
    dis = sqrt( (o1.x-o2.x)*(o1.x-o2.x) + (o1.y-o2.y)*(o1.y-o2.y) );
    cout<<"The distance between given two points is "<<dis;
}

int main()
{   
    point p(1,0);
    p.displayPoint();

    point q(70,0);
    q.displayPoint();

    point dis(0,0);
    dis.distance(p,q);

    return 0;
}