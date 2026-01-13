int k;
#include<stdio.h>
int main(){
	int i,j,m,n;
	int k;
	int arr[100][100];
	scanf("%d %d",&m,&n);
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	scanf("%d",&k);
	
	printf("a) ");
	for(i=m-1;i<m;i++){
		for(j=0;j<n;j++)
		printf("%d ",arr[i][j]);
	}
	
	printf("\n");
	printf("b) ");
	for(i=0;i<m;i++){
		for(j=0;j<1;j++)
		printf("%d ",arr[i][j]);
	}
	
	printf("\n");
	printf("c) ");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			if(arr[i][j]>arr[0][2]){
				printf("%d ",arr[i][j]);
			}
		}
	}
	
	printf("\n");
	printf("d) ");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			if(arr[i][j]>arr[0][2]){
				printf("%d,%d ",i,j);
			}
		}
	}
	
	printf("\n");
	printf("e) \n");
	for(i=0;i<m;i++){
		arr[i][n] = arr[i][2]+arr[i][3];
		for(j=0;j<n+1;j++){
			printf("%d ",arr[i][j]); 
		}
		printf("\n");
	}

	printf("f) \n");
	for(i=0;i<m;i++){
		int x = arr[i][1];
		arr[i][1] = arr[i][n];
		arr[i][n] = x;
		for(j=0;j<n+1;j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	
	printf("g) \n");
	for(i=0;i<n+1;i++){
		int a = arr[0][i];
		arr[0][i] = arr[m-1][i];
		arr[m-1][i] = a;
	}
	for(i=0;i<m;i++){
		for(j=0;j<n+1;j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	
	printf("h) ");
	int news[100];
	int s=0;
	for(i=0;i<m;i++){
		for(j=0;j<n+1;j++){
			if(arr[i][j]%2 == 0){
				news[s++] = arr[i][j];
			}
		}
	}
	printf("new=[");
	for(i=0;i<s;i++){
		printf("%d",news[i]);
		if(i<s-1){
			printf(" ");
		}
	}
	printf("]");
	
	printf("\n");
	printf("i) \n");
	for(i=0;i<m;i++){
		for(j=0;j<n+1;j++){
			if(arr[i][j] == k){
				printf("<%d> ",arr[i][j]);
			}else{
				printf("%d ",arr[i][j]);
			}
		}
		printf("\n");
	}
}

