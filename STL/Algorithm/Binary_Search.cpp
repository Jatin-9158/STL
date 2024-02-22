#include<bits/stdc++.h>
using namespace std;
int main ()
{
 vector<int>v;
 int n;
 v.push_back(1);
 v.push_back(2);
 v.push_back(3);
 v.push_back(4);
 cout<<"Enter Element to Find:";
 cin>>n;
 if(binary_search(v.begin(),v.end(),n)==1)
 {
    cout<<"Element found"<<endl;
 }
 else
 {
    cout<<"Element not found"<<endl;
 }
cout<<"Lower Bound->"<<lower_bound(v.begin(),v.end(),n)-v.begin()<<endl;
cout<<"Upper Bound->"<<upper_bound(v.begin(),v.end(),n)-v.begin()<<endl;

int A=8;
int B=5;
cout<<"Max->"<<max(A,B)<<endl;
cout<<"Min->"<<min(A,B)<<endl;
swap(A,B);
cout<<"A->"<<A<<endl;
cout<<"B->"<<B<<endl;
string abcd="abcd";
reverse(abcd.begin(),abcd.end());
cout<<"String->"<<abcd<<endl;
rotate(v.begin(),v.begin()+1,v.end());
cout<<"After Rotate:";
for(int i:v)
{
    cout<<i<<" ";
}
cout<<endl;
sort(v.begin(),v.end());
cout<<"After Sort:";
for(int i:v)
{
    cout<<i<<" ";
}
return 0;
}