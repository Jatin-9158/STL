#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<int> l;
    list<int> n(5,100);
    l.push_back(1);
    l.push_front(2);
    cout<<"Elements in the List:"<<endl;
    for(int i:l)
    {
        cout<<i<<" ";
    }
    l.erase(l.begin());
    cout<<endl;
    cout<<"After Erase Elements Left in the List:";
    for(int i:l)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"Size of List:"<<l.size()<<endl;
    for(int i:n)
    {
        cout<<i<<" ";
    }
    
}