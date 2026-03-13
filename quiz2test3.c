#include<stdio.h>

int da(int n);
int fac(int n);

int main(){
    int n;
    scanf("%d",&n);
    printf("%d\n",da(n));
    printf("%d",fac(n));
}

int da(int n){
    if(n==1 || n==2 || n==3){
        return 1;
    }
    else{
        return da(n-2)+da(n-3);
    }
}

int fac(int n){
	if(n==0 || n==1){
		return 1;
	}else{
		return n*fac(n-1);
	}
}
