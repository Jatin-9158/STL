#include<iostream>
#include<windows.h>
int Factorial(int n)
{
   int Fact[n];
   for(int i=0;i<n;i++)
   {
      Fact[i]=-1;
   }
   if(n<=1)
   {
      return 1;
   }
   else
   {
       if(Fact[n-1]==-1)
       {
          Fact[n-1]=Factorial(n-1);
       }
       return n*Fact[n-1];
   }

}
int Combination(int n,int r)
{
    int t1=Factorial(n);
    int t2=Factorial(n-r);
    int t3=Factorial(r);
    return t1/(t2*t3);
}
int main()
{
  system("cls");
  int Total_Cases,Chosen_Cases;
  std::cout<<"Enter the Total Number of Cases:";
  std::cin>>Total_Cases;
  std::cout<<"Enter the Number to be Chosen:";
  std::cin>>Chosen_Cases;
  system("cls");
  std::cout<<"Number of Ways are:"<<Combination(Total_Cases,Chosen_Cases)<<std::endl;
  Sleep(1000);
}