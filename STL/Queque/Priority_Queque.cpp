/* In Priority Queque your First Element is always greater 
also known as Max Heap */
#include<bits/stdc++.h>
using namespace std;
int main ()
{ 
//Max Heap
priority_queue<int>maxi;
//Min Heap
priority_queue<int,vector<int>,greater<int>>mini;
maxi.push(2);
maxi.push(3);
maxi.push(4);
maxi.push(5);
cout<<"Size->"<<maxi.size()<<endl;
int n=maxi.size();
for(int i=0;i<n;i++)
{
  cout<<maxi.top()<<" ";
  maxi.pop();
}
cout<<endl;
mini.push(2);
mini.push(3);
mini.push(4);
mini.push(5);
int m=mini.size();
cout<<"Mini"<<endl;
for(int i=0;i<m;i++)
{
  cout<<mini.top()<<" ";
  mini.pop();
}
return 0;
}