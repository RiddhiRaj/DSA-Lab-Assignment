//Write a C program to find the 3rd user defined position based on the maximum element in an array using dynamic memory allocation.
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
    printf("Enter the element to be searched\n");
    int x;
    scanf("%d",&x);
    int flag=0;
    for(int i=0;i<n;i++){
        if(a[i]==x){
            printf("Element found at position %d\n[Position starts from 1]",i+1);
            flag=1;
            break;
        }
    }
    if(flag==0){
        printf("Element not found\n");
    }
    return 0;
}