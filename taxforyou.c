#include<stdio.h>
int main(){
	int h,r;
	scanf("%d %d",&h,&r);
	int sum = h*r;
	if(sum<=10000){
		printf("0.00");
	}else{
		if(sum>10000 && sum<=20000){
			float x = (sum - 10000)*0.08;
			printf("%.2f",x);
		}else{
			float z = ((sum - 20000)*0.1)+(10000*0.08);
			printf("%.2f",z);
		}
	}
}
