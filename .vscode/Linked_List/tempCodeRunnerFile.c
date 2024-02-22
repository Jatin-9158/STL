#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
}*temp=NULL,*first=NULL,*last=NULL;
void create()
{
  temp=(struct Node*)malloc(sizeof(struct Node));
  printf("Enter the Data:");
  scanf("%d",&temp->data);
  first=temp;
  last=temp;
}
void Insert_at_Beg()
{
    create();
    temp->next=first;
    first=temp;
}
void display()
{
    temp=first;
    if(first==NULL)
    {
        printf("It seems no data inside the List\n");
    }
    else
    {
      while(temp!=NULL)
      {
        printf("%d",temp->data);
        temp=temp->next;
      }
    }
}
int main()
{
    int flag=0;
    int choice;
    while(flag==0)
    {
     printf("Enter the Following Number for following operations:\n");
     printf("Press 1 to Insert Node:\n");
     printf("Press 2 to Display:\n");
     printf("Enter the Choice:\n");
     scanf("%d",&choice);
     switch(choice)
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
        default:
           break;
     }
    }
    return 0;
}
