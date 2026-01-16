#include<stdio.h>
int main(){
	char name[][15] = {"Latte","Espresso","Lris","Frappuccino","Cappuccino","Mocha","Americano","Black Eye"};
	int p[] = {35,45,30,50,45,48,39,35};
	int n,x,i;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	scanf("%d",&x);
	for(i=0;i<8;i++){
		if(arr[x-1] == i){
			printf("%s(%d)",name[i-1],p[i-1]);
		}
	}
}
