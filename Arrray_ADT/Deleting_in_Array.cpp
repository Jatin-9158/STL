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
}
void delete1(struct Array *arr,int index)
{
    if(index>=0 && index<=(arr->length-1))
    {
        for(int i=index;i<(arr->length-1);i++)
                                        arr->A[i]=arr->A[i+1];
        arr->length--;
    }
}
int main()
{
    struct Array arr={4,{1,2,3,5},3};
    display(&arr);
    delete1(&arr,3);
    display(&arr);
}