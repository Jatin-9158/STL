#include<bits/stdc++.h>
using namespace std;
struct Array
{
  int A[10];
  int length;
  int size;
};
void Get(struct Array *arr,int index)
{
    if(index>=0 && index<arr->length)
    {
        cout<<arr->A[index]<<endl;
    }
    else
    {
        cout<<"Index Out of Range"<<endl;
    }
}
void Set(struct Array *arr,int index,int data)
{
     if(index>=0 && index<arr->length)
    {
        arr->A[index]=data;
    }
    else
    {
        cout<<"Index Out of Range"<<endl;
    }   
}
int Max(struct Array *arr)
{
    int max=arr->A[0];
    for(int i=1;i<arr->length;i++)
    {
        if(arr->A[i]>max)
        {
           max=arr->A[i];
        }
    }
    return max;
}
int Min(struct Array *arr)
{
    int min=arr->A[0];
    for(int i=0;i<arr->length;i++)
    {
        if(arr->A[i]<min)
        {
            min=arr->A[i];
        }
    }
    return min;
}
int Sum(struct Array *arr)
{
    int Total=0;
    for(int i=0;i<arr->length;i++)
    {
        Total=Total+arr->A[i];
    }
    return Total;
}
// Method 1
void Reverse_1(struct Array *arr)
{
    struct Array Arr1=*arr;
    for(int i=arr->length-1;i>=0;i--)
    {
        Arr1.A[arr->length-i-1]=arr->A[i];
    }
    *arr=Arr1;
}
// Method 2;
void Reverse(struct Array *arr)
{
    for(int i=0;i<(arr->length-1)/2;i++)
    {
        int temp=arr->A[i];
        arr->A[i]=arr->A[(arr->length-1)-i];
        arr->A[(arr->length-1)-i]=temp;
    }
}
void display(struct Array *arr)
{
    cout<<"\nElements are:";
    for(int i=0;i<arr->length;i++)
    {
       cout<<arr->A[i]<<" ";
    }
}
void Left_Shift(struct Array *arr,int Shift_Key)
{
    for(int i=0;i<Shift_Key;i++)
    { 
       for(int j=0;j<arr->length-1;j++)
       {
          arr->A[j]=arr->A[j+1];
       }
       arr->A[arr->length-1]=0;
    }
}
void Left_Rotate(struct Array *arr,int Rotate_Key)
{
    for(int i=0;i<Rotate_Key;i++)
    {   int temp=arr->A[0];
        for(int j=0;j<arr->length-1;j++)
        {
            arr->A[j]=arr->A[j+1];
        }
        arr->A[arr->length-1]=temp;
    }
}
void Right_Shift(struct Array *arr,int Shift_Key)
{
    for(int i=0;i<Shift_Key;i++)
    {
        for(int j=(arr->length-1);j>0;j--)
        {
            arr->A[j]=arr->A[j-1];
        }
        arr->A[0]=0;
    }
}
void Right_Rotate(struct Array *arr,int Rotate_Key)
{
    for(int i=0;i<Rotate_Key;i++)
    {   int temp=arr->A[arr->length-1];
        for(int j=(arr->length-1);j>0;j--)
        {
            arr->A[j]=arr->A[j-1];
        }
        arr->A[0]=temp;
    }
}
int main()
{
    struct Array arr={{1,2,3,5,3},5,3};
    Get(&arr,3);
    Set(&arr,3,4);
    Get(&arr,3);
    cout<<Max(&arr)<<endl;
    cout<<Min(&arr)<<endl; 
    cout<<Sum(&arr)<<endl;
    Reverse(&arr);
    display(&arr);
    Reverse_1(&arr);
    display(&arr);
    Left_Shift(&arr,1);
    display(&arr);
    struct Array arr1={{1,2,3,5,3,0,0,0,0},8,3};
    Left_Rotate(&arr1,2);
    display(&arr1);
    Right_Shift(&arr1,2);
    display(&arr1);
    Right_Rotate(&arr1,2);
    display(&arr1);
    return 0;
}