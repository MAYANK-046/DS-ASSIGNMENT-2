#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void printList(struct node *head)
{
    struct node *temp = head;
    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main()
{
    struct node *head = NULL;               
    struct node *one = NULL;
    struct node *two = NULL;
    struct node *three = NULL;

    one = malloc(sizeof(struct node));            
    two = malloc(sizeof(struct node));
    three = malloc(sizeof(struct node));


    one -> data = 16;                            
    two -> data = 25;
    three -> data = 34;


    one -> next = two;                            
    two -> next = three;
    three -> next = NULL;
    head = one;
    
    printList(head);

    return 0;
}