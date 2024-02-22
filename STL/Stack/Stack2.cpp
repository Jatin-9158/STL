#include<iostream>
using namespace std;
class Stack
{
    public:
         int top;
         int size;
         int *arr;
         Stack(int size)
         {
            top=-1;
            this->size=size;
            arr=new int[size];
         }
         void push(int data)
         {
            if(top<size-1)
            {
               arr[++top]==data;
            }
            else
            {
                cout<<"Stack Overflow"<<endl;
            }
         }
         void pop()
         {
            if(top==-1)
                    cout<<"Stack Underflow"<<endl;
            else
             top--;
         }

};
int main()
{
  Stack s(5);
  s.push(34);
  s.push(43);
  s.push(34);
  s.push(43);
  s.push(34);
  s.push(43);
  s.pop();
  s.pop();
  s.push(45);
  s.pop();
  s.pop();
    s.pop();
  s.pop();
    s.pop();
  s.pop();
    s.pop();
  s.pop();
  
  return 0;
}