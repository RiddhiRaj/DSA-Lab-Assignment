//Write a C program to merge two sorted dynamic array
#include<stdio.h>
#include <stdlib.h>
int main()
{
    printf("Enter the number of elements in the 1st array: ");
    int n;
    scanf("%d",&n);
    int *a=(int *)malloc(n*sizeof(int));
    printf("Enter the elements\n");
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter the number of elements in the 2nd array: ");
    int m;
    scanf("%d",&m);
    int *b=(int *)malloc(m*sizeof(int));
    printf("Enter the elements\n");
    for(int i=0;i<m;i++)
        scanf("%d",&b[i]);
    int *c=(int *)malloc((n+m)*sizeof(int));
    int i=0,j=0,k=0;
    while(i<n && j<m)
    {
        if(a[i]<b[j])
            c[k++]=a[i++]; 
        else
            c[k++]=b[j++]; 
    
    while(i<n)
      c[k++]=a[i++];
    while(j<m)
        c[k++]=b[j++];
    printf("The merged array is: ");
    for(int i=0;i<n+m;i++)
        printf("%d ",c[i]);
    return 0;
}