#include<stdio.h>
#include<string.h>

void check(char name[],char pass[]);

int main(){
	char name[5];
	char pass[9];
	int i,n;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf(" %4[^:]:%8s",name,pass);
		check(name,pass);
	}
}
void check(char name[],char pass[]){
	int i,num=0,upper=0;
	if(strlen(name) == 4 ){
		if(!(name[0] >= '0' && name[0] <= '9')){
			if(strlen(pass)>=4 && strlen(pass)<=8){
				int len = strlen(pass);
				for(i=0;i<len;i++){
					if(pass[i] >= '0' && pass[i] <= '9'){
						num++;
					}
					if(pass[i] >= 'A' && pass[i] <='Z'){
						upper++;
					}
				}
				if(num >= 2 && upper >=1){
					printf("%s\n",name);
				}
			}
		}
	}
}
