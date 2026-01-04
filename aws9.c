#include<stdio.h>
int main(){
	int H,M,i,j;
	scanf("%d %d",&H,&M);
	while(H!=0 && M!=0){
		for(i=0;i<H;i++){
			for(j=0;j<M;j++){
				printf("* ");
			}
			printf("\n");
		}
		printf("\n");
		scanf("%d %d",&H,&M);
	}
}
