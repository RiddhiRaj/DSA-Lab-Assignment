//Write a C program to search an element in a 2D-Array using dynamic memory allocation.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    printf("Enter the number of rows and columns of the array: ");
    int m,n;
    scanf("%d %d",&m,&n);
    int **a=(int **)malloc(m*sizeof(int *));//dynamic memory allocation for 2D array
    for(int i=0;i<m;i++)
    {
        a[i]=(int *)malloc(n*sizeof(int));//dynamic memory allocation for each row of the array
    }
    printf("Enter the elements of the array\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the element to be searched\n");
    int x;
    scanf("%d",&x);
    int flag=0;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i][j]==x)
            {
                printf("Element found at (%d,%d)\n",i,j);
                flag=1;
            }
        }
    }
    if(flag==0)
    {
        printf("Element not found\n");
    }
    return 0;
}
