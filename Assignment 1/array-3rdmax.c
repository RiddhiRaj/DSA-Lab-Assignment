//Write a C program to find the 3rd user defined position based maximum element in an array using dynamic memory allocation

#include<stdio.h>
#include <stdlib.h>
int main()
{
    printf("Enter the number of elements in the array: ");
    int n;
    scanf("%d",&n);
    int *a=(int *)malloc(n*sizeof(int));
    printf("Enter the elements of the array\n");
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);

    int max=a[0];
    int max2=a[0];
    int max3=a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max3=max2; max2=max; max=a[i];
        }
        else if(a[i]>max2)
        {
            max3=max2; max2=a[i];
        }
        else if(a[i]>max3)
            max3=a[i];
    }
    printf("3rd largest element in the array is %d\n",max3);
    return 0;
}