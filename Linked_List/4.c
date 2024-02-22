#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
}*temp=NULL,*first=NULL,*temp1=NULL;
void create()
{
    temp=(struct Node*)malloc(sizeof(struct Node));
    printf("Enter the Data:");
    scanf("%d",&temp->data);
    temp->next=NULL;
}
void Insert_at_Beg()
{
    create();
    if(first==NULL)
    {
        first=temp;
    }
    else
    {
        temp->next=first->next;
        first=temp;
    }
}
void display()
{
    if(first==NULL)
    {
        printf("No Data\n");
    }
    else
    {
      temp1=first;
      printf("\nLinked List:");
      while(temp1!=NULL)
      {
        printf("%d",temp1->data);
        temp1=temp1->next;
      }
    }
}
int main()
{
 int flag=0;
 int choice;
 while(flag!=1)
 {
   printf("Enter the Choice:");
   scanf("%d",&choice);
   switch (choice)
  {
    case 1:
      Insert_at_Beg();
      break;
    case 2:
      display();
      break;
    case 3:
      flag=1;
      break;
    
  }
 }
 
 return 0;
}