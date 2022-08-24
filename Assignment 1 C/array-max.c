//Write a C program to find the minimum element in an array using dynamic memory allocation.
#include<stdio.h>
#include<stdlib.h>
int main(){
    printf("Enter the size of the array\n");
    int n;
    scanf("%d",&n);
    int *a=(int *)malloc(n*sizeof(int));
    printf("Enter the elements of the array\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int min=a[0];
    for(int i=0;i<n;i++){
        if(a[i]<min){
            min=a[i];
        }
    }
    printf("Minimum element is %d\n",min);
    return 0;
}