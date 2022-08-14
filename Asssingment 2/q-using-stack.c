//Write a C program to implement queue using stack
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

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
    while (temp != NULL)
    {
        struct node *next = temp->next;
        temp->next = prev;
        prev = temp;
        temp = next;
    }
    top = prev;
}

int main()
{
    //enter the elements in the stack
    int n;
    printf("Enter the number of elements in the stack\n");
    scanf("%d", &n);
    printf("Enter the elements: \n");
    for (int i = 0; i < n; i++)
    {
        int ele;
        
        scanf("%d", &ele);
        push(ele);
    }
    printf("The elements in the stack are\n");
    display();
    printf("The elements in the stack in reverse order are\n");
    reverse();
    display();
    return 0;
}

