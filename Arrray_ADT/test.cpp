#include<iostream>
using namespace std;
class Node
{
  private:
    int data;
    Node *Left;
    Node *Right;
  public:
     Node(int data)
     {
        this->data=data;
        this->Left=NULL;
        this->Right=NULL;
     }
     void Insert(int Data);
};
void Node::Insert(int Data)
{
    if(root==NULL)
    {
       temp=new Node(Data);
       root=temp;
    }
    if(root->Left)
}
int main()
{

}