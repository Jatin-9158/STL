/*Last in First out Rule is Followed in this Data Structures.
It follows LIFO Rule*/ 
#include<bits/stdc++.h>
#include<stack>
using namespace std;
int main ()
{
 stack<string> s;
 s.push("love");
 s.push("Babbar");
 s.push("Kumar");
 cout<<"Top Element->"<<s.top()<<endl;
 s.pop();
 cout<<"Top Element->"<<s.top()<<endl;
 cout<<"Size of Stack->"<<s.size()<<endl;
 cout<<"Empty or Not->"<<s.empty()<<endl;


return 0;
}