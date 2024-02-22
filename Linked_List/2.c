#include<stdio.h>
#include<stdlib.h>

struct Node
{
  int data;
  struct Node *nextNode;
};

void display(struct Node *Head)
{
  printf("Linked List:\n");
  struct Node *temp = Head->nextNode;
  while(temp != NULL)
  {
    printf("%d ", temp->data);
    temp = temp->nextNode;
  }
}

void InsertElementsNo(int key, struct Node *Head)
{
  int count = 0;
  struct Node *temp = Head;
  while(count < key)
  {
    printf("Enter the Data:");
    temp->nextNode = (struct Node*)malloc(sizeof(struct Node));
    temp = temp->nextNode;
    scanf("%d", &(temp->data));
    temp->nextNode = NULL;
    count++;
  }
}
void InsertatEnd(struct Node *Head)
{ 
  int Element1;
  struct Node *temp=Head;
  while(temp->nextNode!=NULL)
  {
    temp=temp->nextNode;
  }
  struct Node *New_Node=(struct Node*)malloc(sizeof(struct Node));
  temp->nextNode=New_Node;
  printf("Enter the Element you want to insert at End at:");
  scanf("%d", &Element1);
  New_Node->data=Element1;
  New_Node->nextNode=NULL;
}

void InsertatBeg(struct Node *Head)
{
  int Element;
  struct Node *New_Node = (struct Node*)malloc(sizeof(struct Node));
  printf("Enter the Element you want to insert at Beginning at:");
  scanf("%d", &Element);
  New_Node->data = Element;
  New_Node->nextNode = Head->nextNode;
  Head->nextNode = New_Node;
}
void InsertatMid(struct Node *Head,int Position)
{
  int Count=0,Data;
  struct Node *temp=Head->nextNode;
  while(Count<Position)
  {
    temp=temp->nextNode;
    Count++;
  }
  struct Node *New_Node=(struct Node*)malloc(sizeof(struct Node));
  New_Node->nextNode=temp->nextNode;
  temp->nextNode=New_Node;
  printf("Enter the Data:");
  scanf("%d",&Data);
  New_Node->data=Data;
}
void deleteatBegin(struct Node *Head)
{
    struct Node *temp = Head->nextNode;
    Head->nextNode = temp->nextNode;
    free(temp);
}
// void deleteAtEnd(struct Node *Head) {
//     if (Head == NULL || Head->nextNode == NULL) {
//         printf("List is empty or contains only one node. Cannot delete.\n");
//         exit(0);
//     }

    // struct Node *temp = Head;
    // struct Node *prev = NULL;

    // while (temp->nextNode != NULL) {
    //     prev = temp;
    //     temp = temp->nextNode;
    // }

    // printf("Deleted node data: %d\n", temp->data);

    // prev->nextNode = NULL; // Unlink the last node
    // free(temp); // Free the memory allocated to the last node



int main()
{ 
  int key, Element,Element1,Position;
  struct Node *Head = (struct Node*)malloc(sizeof(struct Node));
  Head->nextNode = NULL; // Initializing the head poi
}
