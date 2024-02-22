/* Why Array is called Pass By Reference:
        Because We are Doing Changing in the same array */
#include<bits/stdc++.h>
using namespace std;
void swap(int *arr,int *arr2)
{
    cout<<arr<<endl;
    cout<<&arr<<endl;
    *arr=*arr+*arr2;
    *arr2=*arr-*arr2;
    *arr=*arr-*arr2;
}
int main()
{
    int a=5;
    int b=10;
    cout<<&a<<endl;
    cout<<"A & B :";
    cout<<a<<"\t"<<b<<endl;
    swap(&a,&b);
    cout<<"A & B :";
    cout<<a<<"\t"<<b<<endl;
    return 0;
}