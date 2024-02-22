/* Lower Bound-> Returns the Iterator      | Upper Bound-> Returns the Next Iterator*/
/*->Element not found Returns next Iterator|->In both cases it will return next iterator    */
// Lower Bound
// It will return the index value 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    auto itr =lower_bound(a,a+n,4)-a;
    cout<<itr;
    return 0;
}
// Upper Bound
// Returns the Index Value
#include<bits/stdc++.h>
using namespace std;
int main ()
{   
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    auto itr =upper_bound(a,a+n,4)-a;
    cout<<itr;
return 0;
}
