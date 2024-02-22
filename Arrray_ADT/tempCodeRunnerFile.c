#include<stdio.h>
#include<stdlib.h>
struct Node
{
   int data;
   struct Node *next;
}*New_Node=NULL,*temp=NULL,*first=NULL,*temp2=NULL;
void create()
{
   New_Node=(struct Node*)malloc(sizeof(struct Node));
   printf("Enter the Data:");
   scanf("%d",&New_Node->data);
   New_Node->next=NULL;
}
void Insert(int N)
{
  for(int i=0;i<N;i++)
  {
    if(first==NULL)
    {
        create();
        first=New_Node;
    }
    else
    {
        create();
        temp=first;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=New_Node;
    }
  }
}

void Insert_at_Nodes(int Number_of_Nodes,int Postion)
{
  temp=first;
  int i=0;
  while(i<Postion-1 && temp->next!=NULL)
  {
     temp=temp->next;
     i++;
  }
  temp2=temp->next;
  for(int i=0;i<Number_of_Nodes;i++)
  {
     create();
     temp->next=New_Node;
     temp=temp->next;
  }
  temp->next=temp2;
}
void display()
{
   temp2=first;
   printf("Elements are:");
   while(temp2!=NULL)
   {
      printf("%d ",temp2->data);
      temp2=temp2->next;
   }
}
int main()
{
   int Number_of_Elements,index,Number;
   char Choice;
   printf("Enter the Number of Elements:");
   scanf("%d",&Number_of_Elements);
   Insert(Number_of_Elements);
   printf("Want to Add More Elements :");
   printf("Press Y for Yes");
   printf("Press N for No");
   printf("Enter Choice:");
   scanf("%d",&Choice);
   switch (Choice)
   {
   case 'Y':
      printf("Tell me Index( 0 based Indexing !):");
      scanf("%d",index);
      printf("Enter Number of Elements:");
      scanf("%d",Number);
      Insert_at_Nodes(Number,index);
      break;
   case 'N':
      
      break;
   default:
      break;
   }

}