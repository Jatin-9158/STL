#include<bits/stdc++.h>
using namespace std;
class Rectangle
{
    private:
       double Length;
       double Breadth;
    public:
       Rectangle(double Length,double Breadth)
       {
         this->Length=Length;
         this->Breadth=Breadth;
       }
       double area();
       double getLength()
       {
        return Length;
       }
       double getBreadth()
       {
        return Breadth;
       }
};
double Rectangle::area()
{
    return Length*Breadth;
}
int main ()
{ Rectangle R1(12,56);
  cout<<"Length of the Rectangle:"<<R1.getLength()<<endl;
  cout<<"Breadth of the Rectangle:"<<R1.getBreadth()<<endl;
  cout<<"Area of the Rectangle:"<<R1.area()<<endl;

  
return 0;
}