//Write a C program to modify the size of an array and utilize that during run time
#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("Enter the number of elements of array\n");
    scanf("%d",&n);
    int *a=(int*)malloc(n*sizeof(int));
    printf("Enter the elements of array\n");
    for(int i=0;i<n;i++)
        scanf("%d",a+i);
    //modify array
    printf("\nEnter the new size of the array\n");
    scanf("%d",&n);
    a=(int*)realloc(a,n*sizeof(int));
    printf("The array after modifying the size is: \n");
    for(int k=0;k<n;k++)
        printf("%d ",*(a+k));
    return 0;
}
