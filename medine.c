#include<stdio.h>
int main(){
	int n,i,j;
	scanf("%d",&n);
	int arr[n][n];
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	int sum[100];
	int min, max;
	for(i = 0; i < n; i++){
    	min = arr[i][0];
    	max = arr[i][0];
    	for(j = 1; j < n; j++){
        	if(arr[i][j] < min){
           	 	min = arr[i][j];
        	}
        	if(arr[i][j] > max){
           	 	max = arr[i][j];
       		 }
    	}
    	sum[i] = max-min;
	}
	for(i=0;i<n;i++){
		printf("%d ",sum[i]);
	}	
}
