#include <iostream>

using namespace std;

int main()
{  /*loops in C++
    There are three types of loops in C++
    1. for loop
    2. while loop
    3. do while loop
 */

//for loop
/* syntax for for loop
for(initialization; condition; updation;)
{
    loop body(c++ code);
}
*/
for (int i = 0; i <= 5; i++)
{
   cout<<i<<endl;
   
}
// example infinite for loop
/*for (int i = 0; 2 < 5; i++)
{   
   cout<<i<<endl;
   
}*/

//while loop
/* syntax for while loop
while(condition)
{
    c++ statements;
}
*/
// int i=1;
// while(i<=10){
//     cout<<i<<endl;
//     i++;
// }
//example of infinite loop
/*int i=1;
while(true):
{    cout<<i<<endl;
     i++;
}*/

// do while loop
/* syntax for do while loop
do
{
    c++ statements;
}while(condition);
*/
// int i=1;
// do
// {  cout<<i<<endl;
//    i++; 
// } while (i<=10);

// do while ek barr to loop chlata hai bina condition check karre








    return 0;
}