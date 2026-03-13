#include<stdio.h>
#include<string.h>

int check(char wlord[]);

int main(){
	int n,i,max=0;
	char wlord[21];
	char aws[21];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",wlord);
		if(check(wlord) == 1){
			if(strlen(wlord) > max){
				max = strlen(wlord);
				strcpy(aws,wlord);
			}
		}
	}
	if(max > 0){
		printf("%s",aws);
	}
}

int check(char wlord[]){
	int i;
	for(i=0;i<strlen(wlord);i++){
		if(!wlord[i] >= 'a' && wlord[i] <= 'z'){
			return 0;
		}
	}
	return 1;
}
