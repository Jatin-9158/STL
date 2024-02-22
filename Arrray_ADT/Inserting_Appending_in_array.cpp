#include <stdio.h>

// Structure definition for the array
struct Array
{
    int A[10];  // Array to store elements
    int size;   // Maximum size of the array
    int length; // Current length of the array
};

// Function to display the elements of the array
void Display(struct Array arr)
{
    int i;
    printf("\nElements are\n");
    for (i = 0; i < arr.length; i++)
        printf("%d ", arr.A[i]);
}

// Function to append an element to the end of the array
void Append(struct Array *arr, int x)
{
    if (arr->length < arr->size)
        arr->A[arr->length++] = x;
}

// Function to insert an element at a specified index in the array
void Insert(struct Array *arr, int index, int x)
{
    int i;
    if (index >= 0 && index <= (*arr).length)
    {
        for (i = (*arr).length; i > index; i--)
            (*arr).A[i] = (*arr).A[i - 1];
        (*arr).A[index] = x;
        (*arr).length++;
    }
}

// Main function
int main()
{
    // Initialize an array with values {2, 3, 4, 5, 6} and a size of 10
    struct Array arr1 = {{2, 3, 4, 5, 6}, 10, 5};

    // Append the element 10 to the end of the array
    Append(&arr1, 10);

    // Insert the element 12 at index 0
    Insert(&arr1, 0, 12);

    // Display the elements of the modified array
    Display(arr1);

    return 0;
}
