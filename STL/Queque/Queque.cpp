/*This Data Structure Follows FIFO Rule (First In First Out)*/
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    queue<string> q;
    q.push("Love");
    q.push("Babbar");
    q.push("Kumar");
    cout<<"First Element-> "<<q.front()<<endl;
    q.pop();
    cout<<"Second Element-> "<<q.front()<<endl;
    q.pop();
    cout<<"Third Element-> "<<q.front()<<endl;
    cout<<"Size after pop->"<<q.size()<<endl;

return 0;
}