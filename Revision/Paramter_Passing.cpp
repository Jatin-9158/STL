#include<iostream>
using namespace std;
void swap(double &a,double &b);
int main()
{
  double Num1,Num2;
  cout<<"Enter the Number1:";
  cin>>Num1;
  cout<<"Enter the Number2:";
  cin>>Num2;
  cout<<"Before Swapping"<<endl;
  cout<<"Number 1:"<<Num1<<endl;
  cout<<"Number 2:"<<Num2<<endl;
  cout<<"After Swapping"<<endl;
  swap(Num1,Num2);
  cout<<"Number 1:"<<Num1<<endl;
  cout<<"Number 2:"<<Num2<<endl;
  return 0;
}
void swap(double &a,double &b)
{
  a=a+b;
  b=a-b;
  a=a-b;
}