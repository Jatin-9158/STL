#include <bits/stdc++.h> // Include necessary header

using namespace std;

typedef struct 
{
    int Length;
    int Breadth;
} Rectangle;

int main ()
{
    Rectangle r = {10, 5};
    Rectangle *P = &r;

    cout << "Length of the Rectangle: " << P->Length << endl;
    cout << "Breadth of the Rectangle: " << P->Breadth << endl;
    
    return 0;
}
