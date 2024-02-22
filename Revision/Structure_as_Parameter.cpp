#include<bits/stdc++.h>
using namespace std;
typedef struct
{
    int Length;
    int Breadth;
}Rectangle;
void intialize(Rectangle &R1,double Length,double Breadth)
{
 R1.Length=Length;
 R1.Breadth=Breadth;
}
double area(Rectangle &R1)
{
    return R1.Length*R1.Breadth;
}
int main ()
{
    Rectangle R1;
    intialize(R1,56,34);
    cout<<area(R1);

return 0;
}