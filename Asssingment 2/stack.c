//Write a C program to implement stack using dynamic array and perform the following operation • PUSH() • POP() • PEEK() • DISPLAY(). 
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define MAX 10
int top=-1;
//dynamic array
int stack[MAX];
void push(int);
int pop();
int peek();
void display();
int main()
{
    int choice,item;
    while(1)
    {
        printf("\n1.PUSH\n2.POP\n3.PEEK\n4.DISPLAY\n5.EXIT\n");
        printf("\nEnter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                printf("\nEnter the item to be pushed: ");
                scanf("%d",&item);
                push(item);
                break;
            case 2:
                item=pop();
                if(item==-1)
                    printf("\nStack is empty");
                else
                    printf("\nPopped item is %d",item);
                break;
            case 3:
                item=peek();
                if(item==-1)
                    printf("\nStack is empty");
                else
                    printf("\nTopmost item is %d",item);
                break;
            case 4:
                display();
                break;
            case 5:
                exit(0);
            default:
                printf("\nInvalid choice");
        }
    }
}
void push(int item)
{
    if(top==MAX-1)
    {
        printf("\nStack is full");
        return;
    }
    top++;
    stack[top]=item;
}
int pop()
{
    if(top==-1)
    {
        return -1;
    }
    return stack[top--];
}
int peek()
{
    if(top==-1)
    {
        return -1;
    }
    return stack[top];
}
void display()
{
    if(top==-1)
    {
        printf("\nStack is empty");
        return;
    }
    printf("\nStack is: ");
    for(int i=top;i>=0;i--)
    {
        printf("%d ",stack[i]);
    }
}
