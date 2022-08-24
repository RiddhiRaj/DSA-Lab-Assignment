	void main(){
		int n,n1;
		printf("Enter the number of elements of the first array\n");
		scanf("%d",&n);
		int *a=(int*)malloc(n*sizeof(int));
		printf("Enter the elements of the first array\n");
		for(int i=0;i<n;i++)
			scanf("%d",a+i);

		printf("Enter the number of elements of the second array\n");
		scanf("%d",&n1);
		int *b=(int*)malloc(n1*sizeof(int));
		printf("Enter the elements of the second array\n");
		for(int i=0;i<n1;i++)
			scanf("%d",b+i);
		int *c=(int*)malloc((n1+n)*sizeof(int));
		int i;
		for(i=0;i<n;i++){
			*(c+i)=*(a+i);
		}
		for(int i1=i,j=0;i1<n1,j<n1;i1++,j++){
			*(c+i1)=*(b+j);
		}
		for(int i=0;i<=(n1+n)-2;i++){
			for(int j=i+1;j<(n1+n);j++){
				if(*(c+j)<*(c+i)){
					int tmp=*(c+j);
					*(c+j)=*(c+i);
					*(c+i)=tmp;
				}
			}
		}
		printf("The sorted array is: \n");
		for(int k=0;k<(n+n1);k++)
			printf("%d ",*(c+k));
	}
