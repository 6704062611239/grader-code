#include<stdio.h>
int main(){
	int n,i;
	scanf("%d",&n);
	int think[n];
	if(n<=20){
		
	}
	for(i=0;i<n;i++){
		scanf("%d",&think[i]);
	}
	
	printf("a)");
	for(i=0;i<4;i++){
		printf(" %d",think[i]);
	}
	
	printf("\nb)");
	for(i=0;i<n;i++){
		if(think[i]>think[2]){
			printf(" %d",think[i]);
		}
	}
	
	printf("\nc)");
	for(i=0;i<n;i++){
		if(think[i]>think[2]){
			printf(" %d",i);
		}
	}
	
	think[n] = think[2]+think[3];
	printf("\nd)");
	for(i=0;i<n+1;i++){
		printf(" %d",think[i]);
	}
	
	think[3] = think[2] - think[4];
	if(think[3] > 0){
		think[3] = think[2] - think[4];
	}else{
		think[3] = think[4] - think[2];
	}
	printf("\ne)");
	for(i=0;i<n+1;i++){
		printf(" %d",think[i]);
	}
	
	printf("\nf)");
	if(think[1]>think[5]){
		printf(" 2");
	}else{
		printf(" 6");
	}
	
	printf("\ng)");
	int x = think[1];
	think[1] = think[n];
	think[n] = x;
	for(i=0;i<n+1;i++){
		printf(" %d",think[i]);
	}
	
	printf("\nh) new=[");
	int news[100];
	int s = 0;
	for(i=0;i<n+1;i++){
		if(think[i]%2 == 0){
			news[s++] = think[i];
		}
	}
	for(i=0;i<s;i++){
		printf("%d%s", news[i], (i < s - 1) ? " " : "");
	}
	printf("]");
}
