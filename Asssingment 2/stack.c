//Write a C program to implement stack using dynamic array and perform the following operation • PUSH() • POP() • PEEK() • DISPLAY(). 
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
//dynamic array
int *a;
int top=-1;

void push(int);
int pop();
int peek();
void display();
int main()
{
    int choice,item;
    printf("\n1.Push\n2.Pop\n3.Peek\n4.Display\n5.Exit\n");
    while(1)
    {
        
        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                printf("Enter the item to be pushed: ");
                scanf("%d",&item);
                push(item);
                break;
            case 2:
                item=pop();
                if(item==-1)
                    printf("Stack is empty\n");
                else
                    printf("Popped item is %d\n",item);
                break;
            case 3:
                item=peek();
                if(item==-1)
                    printf("Stack is empty\n");
                else
                    printf("Topmost item is %d\n",item);
                break;
            case 4:
                display();
                break;
            case 5:
                exit(0);
            default:
                printf("Invalid choice\n");
        }
    }
    free(a);//free the memory
    return 0;

}
void push(int item)
{
    if(top==-1)
    {
        a=(int *)malloc(sizeof(int));
        a[0]=item;
        top=0;
    }
    else
    {
        a=(int *)realloc(a,(top+1)*sizeof(int));
        a[top+1]=item;
        top++;
    }
}
int pop()
{
    if(top==-1)
        return -1;
    else
    {
        int item=a[top];//store the topmost item in item variable and then pop it from stack
        top--;//decrement the top
        a=(int *)realloc(a,top*sizeof(int));//reallocate the memory to fit the new size
        return item;
    }
}
int peek()
{
    if(top==-1)
        return -1;
    else
        return a[top];
}
void display()
{
    if(top==-1)
        printf("Stack is empty\n");
    else
    {
        printf("Stack is: ");
        for(int i=0;i<=top;i++)
            printf("%d ",a[i]);
        printf("\n");
    }
}

/*Output:
1.Push
2.Pop
3.Peek
4.Display
5.Exit
Enter your choice: 1
Enter the item to be pushed: 4
Enter your choice: 1
Enter the item to be pushed: 87
Enter your choice: 4
Stack is: 4 87 
Enter your choice: 1
Enter the item to be pushed: 45
Enter your choice: 3
Topmost item is 45
Enter your choice: 4
Stack is: 4 87 45 
Enter your choice: 5
*/

