#include<bits/stdc++.h>
using namespace std;
struct Array
{
   int length;
   int A[10];
   int size;
};
int Binary_Search(struct Array *arr,int target)
{
    int low=0,high=arr->length;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr->A[mid]==target)
                            return mid;
        else if(arr->A[mid]>target)
                            high=mid-1;
        else
         low=mid+1;
    }
    return -1;

}
void display(struct Array *arr)
{
    cout<<"\nElements are:";
    for(int i=0;i<arr->length;i++)
    {
       cout<<arr->A[i]<<" ";
    }
    cout<<endl;
}
int main()
{
   struct Array arr={4,{1,2,3,4},10};
   int target;
   display(&arr);
   cout<<"Enter the Number to Find:";
   cin>>target;
   if(Binary_Search(&arr,target)>=0)
                            cout<<"Found";
   else
     cout<<"Not Found";
   display(&arr);
     
}