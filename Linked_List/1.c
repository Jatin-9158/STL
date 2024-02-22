/*  Why Linked List:
                 For Creating an array inside stack:
                                                int A[5];
                 For Creating an array inside heap:
                                                int *P=new int[5];
    Here,Why we use linked list beacuse when we are using array inside heap or stack we 
    have to assign the size to specific array.
    Linked List:
            Node contains Data and pointers to next node.
            Collection of data and pointers to next node. 
            
            First
            [200]-> [8|210]->[3|270]->[12|350]->[9|NULL]
            Node is having a datatype type of itself
            
    How to Construct a Node:
                    struct Node
                    {
                     int data            -->Taking 2 Bytes;
                     struct Node *Next   -->Taking 2 Bytes;
                    }
                    When a structure is having the pointer of its own type 
                    So such structure are called the Self Referential Structure */
// #include<stdio.h>
// struct Node
// {
//         int data;
//         struct Node *next;
// };
// int main()
// {
   
//     struct Node *P,*Q;
//     P=(struct Node*)malloc(sizeof(struct Node));
//     P->data=10;
//     P->next=0;
//     /* In C++
//           You can use new operator
//           Use this command:
//                     (P=new Node)
//     */
//     Q=P;
//     Q=P->next;
//     P=Q->next;
//  }
    /*
      If P is pointing to some node
      if P==0 / means not pointing to any location you can
      use the following condition:
                           if(P==NULL)
                           if(P==0)
                           if(!P) 
    */
    /*
     If P is pointing to some node
     if pointer means pointing to any location for checking you 
     can use following condition:
                        if(P!=NULL)
                        if(P!=0)
                        if(p)
    */
    /* 
      If P is pointing to last node
      if pointer pointing to last node you can check by using 
      following condition:
                       if(P->next==NULL)
    */
    /*
      If P is not pointing to last node
      if pointer is not pointing to the last node you can check
      by using following condition:
                      if(P->next!=NULL)
    */
     /*
       How to Display Linked List:
     */
//     #include<stdio.h>
//     struct Node
//     {
//         int data;
//         struct Node *Next;
//         // Self Referential Structure
//     };
//     int main()
//     { struct Node *First=NULL;
//       struct Node *P=First;
//       // Traversing the Linked List
//       while(P!=0)
//       {
//         printf("%d",P->data);
//         P=P->Next;
//       }
//       return 0;
//     }
    #include<stdio.h>
    #include<stdlib.h>
    struct Node
    {
        int data;
        struct Node *next;
    }*first=NULL;
    void create(int A[],int n)
    {
       struct Node *temp,*last;
       first=(struct Node *)malloc(sizeof(struct Node));
       first->data=A[0];
       first->next=NULL;
       last=first;

       for(int i=1;i<n;i++)
       {
        temp=(struct Node *)malloc(sizeof(struct Node));
        temp->data=A[i];
        temp->next=NULL;
        last->next=temp;
        last=temp;
       }
    }
    void Display(struct Node *p)
    {
        while(p!=NULL)
        {
                printf("%d\n",p->data);
                p=p->next;
        }
    }
    int main()
    {
        int A[]={3,5,7,10,15};
        create(A,5);
        Display(first);
    }
          
            