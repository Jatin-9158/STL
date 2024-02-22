#include<iostream>
using namespace std;
typedef struct
{
  int face;
  int shape;
  int color;  
}card;
int main()
{
  card deck[52]={{1,0,0},{2,0,0}};
  cout<<deck[0].face<<endl;
  cout<<deck[0].shape<<endl;
  return 0;
}