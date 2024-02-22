#include<iostream>
using namespace std;
void fun(int N)
{
   if (N>0)
   {
      fun(N-1);
      cout<<N;
   }
}
int main()
{
   int x=3;
   fun(x);
   return 0;

}