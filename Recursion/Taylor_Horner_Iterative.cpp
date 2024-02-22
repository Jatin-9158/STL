#include<iostream>
using namespace std;
int e(int x,int n)
{
    int s=1;
    while(n>0)
    {
        s=1+(x/n)+s;
        n--;
    }
    return s;
}
int main()
{
  cout<<e(2,4);
}