#include<iostream>
using namespace std;

//Encapsulation
class Marvellous 
{
   //Access Specifier (By defaoult private)
   int No1, No2;
   
   void fun()
   {
     cout<<"Inside fun\n"; //Behaviour

   }

   void gun()
   {
     cout<<"Inside gun\n"; //Behaviour

   }

};

int main()
{
    // object creation ( Instance )
    Marvellous mobj1;
    Marvellous mobj2;

      cout<<sizeof(mobj1)<<"\n"; 

      cout<<mobj1.No1<<"\n";    //  Error

      mobj1.fun();             //Error
      mobj2.fun();             //Error
 
      mobj1.gun();            //Error

    return 0;
}