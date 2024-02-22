#include<bits/stdc++.h>
using namespace std;
double add(double Num1,double Num2);
double sub(double Num1,double Num2);
double multiply(double Num1,double Num2);
double divison(double Num1,double Num2);
int main ()
{
 double Num1,Num2;
 char Operator;
 cout<<"Enter the operator:"<<endl;
 cin>>Operator;
 cout<<"Enter the Number 1:"<<endl;
 cin>>Num1;
 cout<<"Enter the Number 2:"<<endl;
 cin>>Num2;
 switch(Operator)
 {
    case '+':
         cout<<"Addition of two number:"<<add(Num1,Num2)<<endl;
         break;
    case '-':
         cout<<"Subtraction of two number:"<<sub(Num1,Num2)<<endl;
         break;
    case '*':
         cout<<"Multiplication of two number:"<<multiply(Num1,Num2)<<endl;
         break;
    case '/':
         cout<<"Division of two number"<<divison(Num1,Num2)<<endl;
         break;
    default:
         cout<<"Invalid Option"<<endl;
         break;
 }
return 0;
}
double add(double Num1,double Num2)
{
    return Num1+Num2;
}
double sub(double Num1,double Num2)
{
    return Num1-Num2;
}
double multiply(double Num1,double Num2)
{
    return Num1*Num2;
}
double divison(double Num1,double Num2)
{
    return Num1/Num2;
}
