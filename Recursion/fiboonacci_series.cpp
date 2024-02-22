/* Storing and Holding the Result in the Array and using the result wherever result is required
and avoiding wherever excessive call this is called memoization */
// #include<iostream>
// using namespace std;
// int fib(int n)
// {   if(n<=1)
//        return n;
//     return fib(n-2)+fib(n-1);
// }
// int main()
// {
//     cout<<fib(3);
//     return 0;
// }
 // Using Memoization technique to avoid uneccesary and excessive call and reducing time complexity.
#include<iostream>
using namespace std;

int F[35];

int fib(int n) {
    if(n <= 1) {
        F[n] = n;
        return n;
    }
    else {
        if(F[n - 2] == -1)
            F[n - 2] = fib(n - 2);
        if(F[n - 1] == -1)
            F[n - 1] = fib(n - 1);
        return F[n - 2] + F[n - 1];
    }
}

int main() {
    int Number;
    cout << "Enter the Number Upto which Fibonacci Series: ";
    cin >> Number;

    for (int i = 0; i < 10; ++i)
    {
        F[i] = -1;
    }
    cout << "Fibonacci Series up to " << Number << " is: ";
    for (int i = 0; i <= Number; ++i)
    {
          cout << fib(i) << " ";
    }

    return 0;
}

