#include<bits/stdc++.h>
using namespace std;
int main ()
{
    vector<int>v;
    cout<<"Size->"<<v.capacity()<<endl;
    v.push_back(1);
    cout<<"Capacity->"<<v.capacity()<<endl;
    v.push_back(2);
    cout<<"Capacity->"<<v.capacity()<<endl;
    v.push_back(3);
    cout<<"Capacity->"<<v.capacity()<<endl;
    cout<<"Size->"<<v.size()<<endl;
    cout<<"Front->"<<v.front()<<endl;
    cout<<"Back->"<<v.back()<<endl;
    cout<<"Before Pop"<<endl;
    for(int i:v)
    {
        cout<<i<<" ";
    }cout<<endl;
    v.pop_back();
    cout<<"After Pop"<<endl;
    for(int i:v)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"After Removing Size of the Vector->"<<v.size()<<endl;
    cout<<"After Removing Capacity of the Vector->"<<v.capacity()<<endl;
    v.clear();
    cout<<"After Removing Size of the Vector->"<<v.size()<<endl;
    cout<<"After Removing Capacity of the Vector->"<<v.capacity()<<endl;
    //Intializing Vector With Same Elements
    vector<int> a(4,2);
    cout<<"Elements of A:";
    for(int i:a)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"Capacity of A->"<<a.capacity()<<endl;
    // Copy one vector into another vector
    cout<<"Copy Of Vector A into Another Vector"<<endl;
    vector<int> Copy_Vector(a);
    cout<<"Copied Vector Elements: ";
    for(int i:Copy_Vector)
    {
        cout<<i<<" ";
    }
return 0;
}