#include<bits/stdc++.h>
using namespace std;
int main ()
{
map<int,string>m;
m[4]="Babbar";
m[2]="Love";
m[3]="Kumar";
for(auto i:m)
{
    cout<<i.first<<"->"<<i.second<<endl;
}
cout<<"After Inserting:"<<endl;
m.insert({5,"Bheem"});
for(auto i:m)
{
    cout<<i.first<<"->"<<i.second<<endl;
}
cout<<"Finding the 4->"<<m.count(4)<<endl;
cout<<"Finding the -4->"<<m.count(-4)<<endl;
cout<<"Before Erase:"<<endl;
for(auto i:m)
{
    cout<<i.first<<"->"<<i.second<<endl;
}
m.erase(3);
cout<<"After Erase:"<<endl;
for(auto i:m)
{
    cout<<i.first<<"->"<<i.second<<endl;
}
cout<<"Find Function:"<<endl;
auto it =m.find(2);
for(auto i=it;i!=m.end();i++)
{
 cout<<(*i).first<<"->"<<(*i).second<<endl;
}
return 0;
}