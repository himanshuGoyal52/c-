#include <iostream>

using namespace std;

int main()
{     int age; 
     cout<<"Tell me your age : ";
     cin>>age;
    //selection control structure : if else-if else 
// if((age<18) && (age>0)){
//     cout<<"you can not come to my party"<<endl;
// }
// else if(age==18){
//     cout<<"you are a kid and you will get a kid pass"<<endl;

// }
// else if(age<0){
//    cout<<"You are not born yet";

// }
// else {
//     cout<<"You can come to the party";
// }
//selection control structure : switch case statements

switch (age)
{
case 15:cout<<"You are a teenager";
    
    break;
case 18:cout<<"You are a adult ";
   
    break;
case 26:cout<<"You are at chutiya age";
   
    break;    
default:cout<<"you are not a special person";
    break;
}
    return 0;
}