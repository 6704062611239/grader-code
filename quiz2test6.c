#include<stdio.h>

int main(){
    int i,n,j;
    scanf("%d",&n);
    int pd[n],pi[n];
    for(i=0;i<n;i++){
    	scanf("%d %d",&pd[i],&pi[i]);
	}
	for(i=0;i<n;i++){
		for(j=i;j<n;j++){
			if(pi[i] < pi[j] || (pi[i] == pi[j] && pd[i] > pd[j])){
				int t = pi[i];
				pi[i] = pi[j];
				pi[j] = t;
				t = pd[i];
				pd[i] = pd[j];
				pd[j] = t;
			}
		}
		printf("%d\n",pd[i]);
	}
}
