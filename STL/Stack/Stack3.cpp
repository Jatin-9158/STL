// Stack Insert_at_Position
#include <iostream>
#include <stack>
using namespace std;
void Insert_at_Position(stack<int>& s, int count, int position, int target, int n) {
    if (position > n) {
        cout << "Index Out of Range" << endl;
    } else {
        if (count == position) {
            s.push(target);
            return;
        } else {
            int num = s.top();
            s.pop();
            Insert_at_Position(s, count + 1, position, target, n);
            s.push(num);
        }
    }
}

int main() {
    stack<int> myStack;

    myStack.push(1);
    myStack.push(2);
    myStack.push(3);
    myStack.push(4);

    cout << "Original stack: ";
    stack<int> originalStack = myStack;
    while (!originalStack.empty()) {
        cout << originalStack.top() << " ";
        originalStack.pop();
    }
    cout << endl;

    int count = 0;
    int target;
    int position;
    int n = myStack.size(); 

    cout << "Enter the Position:";
    cin >> position;
    cout<<"Enter the Element to be Insert:";
    cin>> target;
    Insert_at_Position(myStack, count, position, target, n);

    cout << "New stack: ";
    while (!myStack.empty()) {
        cout << myStack.top() << " ";
        myStack.pop();
    }
    cout << endl;

    return 0;
}
