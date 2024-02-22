#include<iostream>
using namespace std;

void util(int **ptr) { // Accept a pointer to a pointer
    *ptr = *ptr + 1; // Increment the pointer it points to
}

int main() {
    int a = 5;
    int *p = &a;

    cout << "Before Doing Addition: " << endl;
    cout << &a << endl;

    util(&p); // Pass the address of the pointer

    cout << "After Doing Addition: " << endl;
    cout << p << endl; // Print the updated address

    return 0;
}
