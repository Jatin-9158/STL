#include<stdio.h>
#include<stdlib.h>

int counter = 0;

struct Node {
    int data;
    struct Node *next;
} *first = NULL;

void create_Node(int value) {
    struct Node *temp = (struct Node*)malloc(sizeof(struct Node));
    if (temp == NULL) {
        printf("Memory allocation failed.\n");
        exit(EXIT_FAILURE);
    }
    temp->data = value;
    temp->next = NULL;
    counter++;
}

void Insert_at_Head() {
    int value;
    printf("Enter the Data: ");
    scanf("%d", &value);
    create_Node(value);
    struct Node *temp = (struct Node*)malloc(sizeof(struct Node));
    if (temp == NULL) {
        printf("Memory allocation failed.\n");
        exit(EXIT_FAILURE);
    }
    temp->next = first;
    first = temp;
    free(temp); // Freeing the temporary node after insertion
}

void Insert_at_Last() {
    int value;
    printf("Enter the Data: ");
    scanf("%d", &value);
    create_Node(value);
    struct Node *temp = (struct Node*)malloc(sizeof(struct Node));
    if (temp == NULL) {
        printf("Memory allocation failed.\n");
        exit(EXIT_FAILURE);
    }
    temp->data = value;
    temp->next = NULL;
    if (first == NULL)
        first = temp;
    else {
        struct Node *temp1 = first;
        while (temp1->next != NULL)
            temp1 = temp1->next;
        temp1->next = temp;
    }
    free(temp); // Freeing the temporary node after insertion
}

void delete_at_Value() {
    int Value;
    printf("Enter the Value:");
    scanf("%d", &Value);
    struct Node *temp1 = first, *temp2 = NULL;
    if (first == NULL) {
        printf("List Doesn't Exist.\n");
        return;
    }
    while (temp1 != NULL && temp1->data != Value) {
        temp2 = temp1;
        temp1 = temp1->next;
    }
    if (temp1 == NULL) {
        printf("Value not found.\n");
        return;
    }
    if (temp2 == NULL)
        first = temp1->next;
    else
        temp2->next = temp1->next;
    free(temp1);
    counter--;
}

void delete_at_Pos() {
    int Pos1;
    printf("Enter the Position:");
    scanf("%d", &Pos1);
    struct Node *temp1 = first, *temp2 = NULL;
    int count = 1;
    while (temp1 != NULL && count < Pos1) {
        temp2 = temp1;
        temp1 = temp1->next;
        count++;
    }
    if (temp1 == NULL) {
        printf("Invalid Position.\n");
        return;
    }
    if (temp2 == NULL)
        first = temp1->next;
    else
        temp2->next = temp1->next;
    free(temp1);
    counter--;
}

void display() {
    struct Node *temp1 = first;
    if (temp1 == NULL) {
        printf("Nothing to Display.\n");
        return;
    }
    printf("Data Inside the List:");
    while (temp1 != NULL) {
        printf("%d ", temp1->data);
        temp1 = temp1->next;
    }
    printf("\n");
}
void reverse()
{
    struct Node *NextNode=first;
    struct Node *prev=0;
    struct Node *currentNode=first;
    while(NextNode!=NULL)
    {
        NextNode=NextNode->next;
        currentNode->next=prev;
        prev=currentNode;
        currentNode=NextNode;
    }
}

int main() {
    int flag = 1;
    while (flag) {
        printf("_________________Linked List Menu_____________\n");
        printf("Press 1 for Insert at Head \n");
        printf("Press 2 for Insert at Last \n");
        printf("Press 3 for Delete at Pos  \n");
        printf("Press 4 for Delete at Value \n");
        printf("Press 5 for Exit \n");
        printf("Press 6 for Display \n");
        printf("Press 7 for Reverse\n");
        int choice;
        printf("Enter the Choice:");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                Insert_at_Head();
                break;
            case 2:
                Insert_at_Last();
                break;
            case 3:
                delete_at_Pos();
                break;
            case 4:
                delete_at_Value();
                break;
            case 5:
                flag = 0;
                break;
            case 6:
                display();
                break;
            case 7:
                 reverse();
                 break;
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    }
    return 0;
}
