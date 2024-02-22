// Here We are Creating the Function which we will Call the Fibbonacci Series again.
#include<bits/stdc++.h>
using namespace std;
int Fib(int Number)
{
    if(Number<=1) return Number;
    else
    {
        return Fib(Number-2)+Fib(Number-1);
    }
}
int main ()
{
  cout<<Fib(10);
return 0;
}