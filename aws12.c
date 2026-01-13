#include<stdio.h>
int main(){
	int i,j,r,c;
	int arr[101][101] = {0};
	scanf("%d %d",&r,&c);
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d",&arr[i][j]);
			arr[i][c] = arr[i][c]+arr[i][j];
			arr[r][j] = arr[r][j]+arr[i][j];
		}
		arr[r][c] = arr[i][c]+arr[r][j];
	}
	for(i=0;i<r+1;i++){
		for(j=0;j<c+1;j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
}
