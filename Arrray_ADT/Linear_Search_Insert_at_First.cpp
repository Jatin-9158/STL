// Using Insert_at_First_Element
#include<iostream>
using namespace std;
struct Array
{
   int length;
   int A[10];
   int size;
};
void display(struct Array *arr)
{
    cout<<"\nElements are:";
    for(int i=0;i<arr->length;i++)
    {
       cout<<arr->A[i]<<" ";
    }
    cout<<endl;
}
void Swap(int *x,int *y)
{
   int temp=*x;
   *x=*y;
   *y=temp;
}
int Linear_Search(struct Array *arr, int target)
{
    for (int i = 0; i < arr->length; i++)
    {
        if (arr->A[i] == target)
        {
            // Swap the found element with the Head or Index 0 Element
            if (i > 0)
            {
                Swap(&arr->A[i], &arr->A[0]);
            }
            return 1; // Found
        }
    }
    return -1; // Not Found
}
int main()
{
   struct Array arr={4,{1,2,3,4},10};
   int target;
   display(&arr);
   cout<<"Enter the Number to Find:";
   cin>>target;
   if(Linear_Search(&arr,target))
                            cout<<"Found";
   else
     cout<<"Not Found";
   display(&arr);
     
}