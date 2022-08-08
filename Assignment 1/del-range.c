//Write a C program to delete a range of data from a dynamic array
//Language: c
#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("Enter the number of elements of the first array\n");
    scanf("%d",&n);
    int *a=(int*)malloc(n*sizeof(int));
    printf("Enter the elements of the first array\n");
    for(int i=0;i<n;i++)
        scanf("%d",a+i);

    //enter range
    int start,end;
    printf("Enter the starting index of the range\n");
    scanf("%d",&start);
    printf("Enter the ending index of the range\n");
    scanf("%d",&end);
    //delete range
    for(int k=start;k<=end;k++)
        *(a+k)=0;
    //print array
    printf("The array after deleting the range is: \n");
    for(int k=0;k<n;k++)
        printf("%d ",*(a+k));


    return 0;
}