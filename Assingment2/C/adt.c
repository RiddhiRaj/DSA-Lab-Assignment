// Write a C program to reverse a string using appropriate ADT.

#include <stdio.h>
#include <string.h>
#define MAX 10

char stack[MAX];
int top = -1;
void push(char);
char pop(void);

int main()
{
    char str[MAX];
    int len, i;
    printf("Enter a String: ");
    scanf("%s", str);
    len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        push(str[i]);
    }
    for (int i = 0; i <= len; i++)
    {
        str[i] = pop();
    }
    printf("Reversed String is: %s", str);
}

void push(char c)
{
    if (top == MAX - 1)
    {
        printf("Stack is Overflowed\n");
    }
    else
    {
        top++;
        stack[top] = c;
    }
}

char pop(void)
{
    char c;
    if (top == -1)
    {
        return '\0';
    }
    else
    {
        c = stack[top];
        top--;
        return c;
    }
}

// OUTPUT
// Enter a String: mango
// Reversed String is: ognam