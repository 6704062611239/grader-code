#include<stdio.h>
int main(){
	char name[][15] = {"Latte","Espresso","lris","Frappuccino","Cappuccino","Mocha","Americano","Black Eye"};
	int p[] = {35,45,30,50,45,48,39,35};
	int n,x,y,i,j;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	scanf("%d",&x);
	scanf("%d",&y);
	
	for(i=x;i<=y;i++){
		for(j=0;j<8;j++){
			if(arr[i-1] == j){
				printf("%s(%d)",name[j-1],p[j-1]);
			}
		}
		printf("\n");
	}
}
