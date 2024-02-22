#include<iostream>
using namespace std;

struct Array
{
    int A[10];
    int length;
    int size;
};

bool isSorted(struct Array *arr)
{
    for (int i = 0; i < (arr->length - 1); i++)
    {
        if (arr->A[i + 1] < arr->A[i])
            return false;
    }
    return true;
}

void Negative_Value_Array_Sorting(struct Array *arr)
{
    int i = 0;
    int j = arr->length - 1;
    while (i < j)
    {
        while (arr->A[i] < 0)
            i++;
        while (arr->A[j] >= 0)
            j--;
        if (i < j)
        {
            int temp = arr->A[i];
            arr->A[i] = arr->A[j];
            arr->A[j] = temp;
        }
    }
}

struct Array* Merge(struct Array *arr1,struct Array *arr2)
{
 int i,j,k;
 i=j=k=0;
 struct Array *arr3=(struct Array *)malloc(sizeof(struct Array));
 while(i<arr1->length && j<arr2->length)
 {
   if(arr1->A[i]<arr2->A[j])
            arr3->A[k++]=arr1->A[i++];
   else
     arr3->A[k++]=arr2->A[j++];
 }
 for(;i<arr1->length;i++)
           arr3->A[k++]=arr1->A[i];
 for(;j<arr2->length;j++)
           arr3->A[k++]=arr2->A[j];
arr3->length=arr1->length+arr2->length;
arr3->size=10;
return arr3;
}

void Insert(struct Array *arr, int data)
{
    int i = arr->length - 1;

    while (i >= 0 && arr->A[i] > data)
    {
        arr->A[i + 1] = arr->A[i];
        i--;
    }
    if (i == -1)
    {
        arr->A[0] = data;
    }
    else
    {
        arr->A[i + 1] = data;
    }
    arr->length++;
}

void display(struct Array *arr, const char *message)
{
    cout << message << " Elements are:";
    for (int i = 0; i < arr->length; i++)
    {
        cout << arr->A[i] << " ";
    }
    cout << endl;
}

int main()
{
    struct Array arr = {{-3, 2, 1, -4, -3, -3}, 6, 6};
    Insert(&arr, 0);
    Insert(&arr, 0);
    display(&arr, "After Insertion");
    cout << "Is Sorted: " << isSorted(&arr) << endl;
    Negative_Value_Array_Sorting(&arr);
    display(&arr, "After Negative Value Sorting");

    struct Array arr2 = {{-3, 2, 1, -4, -3, -3}, 6, 6};
    struct Array arr3 = {{-3, 2, 1, -4, -3, -3}, 6, 6};
    struct Array *arr4;
    arr4 = Merge(&arr2, &arr3);
    display(arr4, "Merged");
    delete []arr4;

    return 0;
}
