//Write a C program to find the minimum element in a 2D-array using dynamic memory allocation.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    printf("Enter the number of rows and columns of the array: ");
    int m,n;
    scanf("%d %d",&m,&n);
    int **a=(int **)malloc(m*sizeof(int *));
    for(int i=0;i<m;i++)
        a[i]=(int *)malloc(n*sizeof(int));//dynamic memory allocation for each row of the array
        
    printf("Enter the elements of the array\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int min=a[0][0];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i][j]<min)
            {
                min=a[i][j];
            }
        }
    }
    printf("Minimum element in the array is %d\n",min);
    return 0;
}
