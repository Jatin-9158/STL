#include<iostream>
using namespace std;
typedef struct 
{
    double Length;
    double Breadth;
}Rectangle;
int main()
{
  Rectangle R1,R2;
  R1.Length=90;
  R1.Breadth=80;
  R2.Length=56;
  R2.Breadth=84;
  cout<<"Length and Breadth of the Object 1:"<<R1.Length<<","<<R1.Breadth<<endl;
  cout<<"Length and Breadth of the Object 2:"<<R2.Length<<","<<R2.Breadth;

 return 0;
}