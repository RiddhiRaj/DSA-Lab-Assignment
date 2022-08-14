//Write a C program to implement circular queue.

#include<stdio.h>
#include<stdlib.h>


struct node
{
    int data;
    struct node *next;
};


struct node *top = NULL;
struct node *bottom = NULL;


void push(int data)
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = NULL;
    if (top == NULL)
    {
        top = newNode;
        bottom = newNode;
    }
    else
    {
        bottom->next = newNode;
        bottom = newNode;
    }
}

void pop()
{
    if (top == NULL)
    {
        printf("Stack is empty\n");
        return;
    }
    struct node *temp = top;
    top = top->next;
    free(temp);
}

void display()
{
    if (top == NULL)
    {
        printf("Stack is empty\n");
        return;
    }
    struct node *temp = top;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void reverse()
{
    if (top == NULL)
    {
        printf("Stack is empty\n");
        return;
    }
    struct node *temp = top;
    struct node *prev = NULL;
    struct node *next = NULL;
    while (temp != NULL)
    {
        next = temp->next;
        temp->next = prev;
        prev = temp;
        temp = next;
    }
    top = prev;
}

int main()
{
    printf("Enter the number of elements\n");
    int n;
    scanf("%d", &n);
    printf("Enter the elements\n");
    for (int i = 0; i < n; i++)
    {
        int data;
        scanf("%d", &data);
        push(data);
    }
    printf("The elements in the circular queue are\n");
    display();
    printf("The elements in the circular queue in reverse order are\n");
    reverse();
    display();
    return 0;
}

