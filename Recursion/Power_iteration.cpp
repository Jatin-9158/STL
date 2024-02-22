#include<iostream>
using namespace std;
int Pw(int Number,int Power)
{ int Power_Number=Number;
  if (Power==0)
  {
      return 1;
  }
  else 
     for(int i=0;i<Number;i++)
    {
      Power_Number=Power_Number*Number;
    }
   return Power_Number;
    
}
int main()
{
  cout<<Pw(3,4);
 return 0;
}