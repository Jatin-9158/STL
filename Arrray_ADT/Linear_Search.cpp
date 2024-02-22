// Simple Method
#include<iostream>
using namespace std;
struct Array
{
   int length;
   int A[10];
   int size;
};
int Linear_Search(struct Array *arr,int target)
{
    for(int i=0;i<arr->length;i++)
    {
        if(arr->A[i]==target)
                   return 1;
    }
    return -1;
}
int main()
{
   struct Array arr={4,{1,2,3,4,5,6},10};
   int target;
   cout<<"Enter the Number to Find:";
   cin>>target;
   if(Linear_Search(&arr,target))
                            cout<<"Found";
   else
     cout<<"Not Found";
}