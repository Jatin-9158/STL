/* Set - Stores only Unique Element
You can not modify the elements*/
// Time Complexity for Methods :: Insert,Find,Erase,Count -> O(log n)
// Time complexity for Methods :: Begin,size,end,empty-> O(1)
#include<iostream>
#include<set>
using namespace std;
int main()
{
    set<int> s;
    s.insert(5);
    s.insert(1);
    s.insert(5);
    s.insert(1);
    s.insert(2);
    s.insert(6);
    cout<<"Elements in Set:";
    for(auto i:s)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    set<int>::iterator it=s.begin();
    it++;
    s.erase(it);
    cout<<"Elements in Set:";
    for(auto i:s)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"6 is present->"<<s.count(6)<<endl;
    cout<<"-6 is present->"<<s.count(-6)<<endl;
    cout<<"Iterator using"<<endl;
    set<int>::iterator itr=s.find(5);
    for(auto it=itr;it!=s.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;

}