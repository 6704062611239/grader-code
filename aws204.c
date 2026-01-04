#include<stdio.h>
int main(){
	int n,i,j,N,M;
	scanf("%d",&N);
	for(n=0;n<N;n++){
		scanf("%d",&M);
		for(i=0;i<M;i++){
			for(j=0;j<M;j++){
				if(i==0||i==M-1||j==0||j==M-1){
					printf(". ");
				}else{
					printf("* ");
				}
			}
			printf("\n");
		}
		printf("\n");
	}
}
