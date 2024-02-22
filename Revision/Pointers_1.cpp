// Pointers is address variable indirectly accessing the data
/* Program does not directly acess heap that's why pointer is used to directly access 
   the heap access the external things outside to the program*/
#include<iostream>
using namespace std;
int main()
{
 int a=10;
 int *p;
 p=&a;
 cout<<"Value of a:"<<a<<endl;
 cout<<"Value of *p:"<<*p<<endl;
 
 return 0;
}