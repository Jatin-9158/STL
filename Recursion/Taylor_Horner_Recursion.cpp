#include<iostream>
using namespace std;

double e(int x, int n) {
    static int s = 1;
    if (n == 0)
        return s;
    s = 1 + x / static_cast<double>(n) * s;
    return e(x, n - 1);
}

int main() {
    cout << e(2, 10); 
    return 0;
}
