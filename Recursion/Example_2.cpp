#include<bits/stdc++.h>
using namespace std;
void fun2(int n)
{  
    if(n>0)
    {
        fun2(n-1);
        cout<<n;
    }
}
int main ()
{
  fun2(3);
return 0;
}