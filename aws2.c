#include<stdio.h>
void main(){
	int a,b,c,sum;
	scanf("%d/%d/%d",&a,&b,&c);
	sum = a+b+c;
	if(sum>=80)
		printf("A");
		else if(sum>=70 && sum<80)
			printf("B %d",80-sum);
		else if(sum>=60 && sum<70)
			printf("C %d",80-sum);
		else if(sum>=50 && sum<60)
			printf("D %d",80-sum);
		else if(sum<50)
			printf("F %d",80-sum);
}
