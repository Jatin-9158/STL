#include<bits/stdc++.h>
using namespace std;
template<class T>
class Arithmetic
{
    private:
         T x;
         T y;
    public:
        Arithmetic(T x,T y)
        {
            this->x=x;
            this->y=y;
        }
        T maximum()
        {
            return x>y?x:y;
        }   
};
int main ()
{ 
 Arithmetic<int> A(2,3);
 cout<<"Maximum Value:"<<A.maximum();
    
return 0;
}