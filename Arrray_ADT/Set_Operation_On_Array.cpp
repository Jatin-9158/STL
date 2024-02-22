#include<bits/stdc++.h>
using namespace std;
struct Array
{
  int A[10];
  int size;
  int length;
};
void display(struct Array *arr, const char *message)
{
    cout << message <<endl;
    cout<< "Elements are:";
    for(int i = 0; i < arr->length; i++)
    {
        cout << arr->A[i] << " ";
    }
    cout << endl;
}
struct Array *Intersection(struct Array *arr1,struct Array *arr2)
{
    int i,j,k;
    i=j=k=0;
    struct Array *arr4=new Array;
    while(i<arr1->length && j<arr2->length)
    {
        if(arr1->A[i]<arr2->A[j])
                              i++;
        else if(arr2->A[j]<arr1->A[i])
                              j++;
        else
        {
          arr4->A[k++]=arr1->A[i++];
          j++;
        }
    }
    arr4->length=k;
    arr4->size=10;
    return arr4;

}
struct Array *Union(struct Array *arr1,struct Array *arr2)
{
    int i,j,k;
    i=j=k=0;
    struct Array *arr3=new Array;
    while(i<arr1->length && j<arr2->length)
    {
        if(arr1->A[i]<arr2->A[j])
               arr3->A[k++]=arr1->A[i++];
        else if(arr2->A[j]<arr1->A[i])
               arr3->A[k++]=arr2->A[j++];
        else
        {
          arr3->A[k++]=arr1->A[i++];
          j++;
        }
    }
    for(;i<arr1->length;i++)
        arr3->A[k++]=arr1->A[i];
    for(;j<arr2->length;j++)
        arr3->A[k++]=arr2->A[j];
    arr3->length=k;
    arr3->size=10;
    return arr3;

}
struct Array *Difference(struct Array *arr1,struct Array *arr2)
{
    int i,j,k;
    i=j=k=0;
    struct Array *arr3=new Array;
    while(i<arr1->length && j<arr2->length)
    {
        if(arr1->A[i]<arr2->A[j])
               arr3->A[k++]=arr1->A[i++];
        else if(arr2->A[j]<arr1->A[i])
               j++;
        else
        {
           i++;
           j++;
        }
    }
    for(;i<arr1->length;i++)
        arr3->A[k++]=arr1->A[i];
    arr3->length=k;
    arr3->size=10;
    return arr3;

}
int main ()
{
  struct Array arr1={{1,2,3,4,7,8},5,6};
  struct Array arr2={{5,6,7,8,9,10},5,6};
  struct Array *arr3,*arr4,*arr5;
  arr3=Union(&arr1,&arr2);
  display(arr3,"Union");
  arr4=Intersection(&arr1,&arr2);
  arr5=Difference(&arr1,&arr2);
  display(arr4,"Intersection");
  display(arr5,"Difference");


return 0;
}