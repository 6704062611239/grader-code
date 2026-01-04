#include<stdio.h>
int main(){
	int i,n,y;
	int c1=0,c2=0;
	float g;
	char h;
 	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %f %c",&y,&g,&h);
		if(g>=3.00){
			printf("approved\n");
			if(h=='N'){
				c1++;
			}
		}else{
			if(y>=2){
				if(g>=2.5){
					if(h=='Y'){
						printf("approved\n");
					}else{
						printf("not approved:no help\n");
					}
				}else{
					printf("not approved:grade < 2.50\n");
					if(h=='Y'){
						c2++;
					}
				}
			}else{
				printf("not approved:year < 2\n");
				if(h=='Y'){
					c2++;
				}
			}
		}
	}
	printf("%d\n%d",c1,c2);
}
