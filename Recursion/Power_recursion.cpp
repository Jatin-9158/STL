#include<iostream>
using namespace std;
// Ist Method
int power(int m,int n)
{
    if(n==0)
          return 1;
    return power(m,n-1)*m;
}
// II nd Method
// Takes Less time as function is called half times less than first method
int power1(int m,int n)
{
    if(n==0)
         return 1;
    if(n%2==0)
         return power(m*m,n/2);
    else
       return power(m,n-1)*m;
}
int main()
{   cout<<"First Method Output:";
    int r=power(3,5);
    cout<<r<<endl;
    cout<<"Second Method Output:";
    cout<<power1(3,5)<<endl;
    return 0;
}