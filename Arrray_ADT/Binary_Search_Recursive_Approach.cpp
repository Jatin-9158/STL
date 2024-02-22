// Using Transportation
#include<iostream>
using namespace std;
struct Array
{
   int length;
   int A[10];
   int size;
};
int Binary_Search_Recursive(struct Array *arr,int low,int high,int target)
{
    if(low<=high)
    {
        int mid=(low+high)/2;
        if(arr->A[mid]==target)
        {
            return mid;
        }
        else if(arr->A[mid]>target)
        {
            return Binary_Search_Recursive(arr,low,mid-1,target);
        }
        else
        {
            return Binary_Search_Recursive(arr,mid+1,high,target);            
        }

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
   if(Binary_Search_Recursive(&arr,0,((arr.length)-1),target)>=0)
                            cout<<"Found";
   else
     cout<<"Not Found";
   display(&arr);
     
}