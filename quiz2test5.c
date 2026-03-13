#include<stdio.h>

int main(){
    int k,N,G,i,j;
    scanf("%d %d",&N,&G);
    int sid[N],scr[N],m[N];
    for(i=0;i<N;i++){
    	scanf("%d %d",&sid[i],&scr[i]);
    	m[i] = sid[i] % G;
	}
	for(i=0;i<G;i++){
		for(j=0;j<N-1;j++){
			for(k=j+1;k<N;k++){
				if(m[j]==i && m[k]==i){
					if(scr[j] < scr[k]){
						int t = sid[j];
						sid[j] = sid[k];
						sid[k] = t;
						t = scr[j];
						scr[j] = scr[k];
						scr[k] = t;
					}
				}
			}
		}
		printf("%d",i);
		for(j=0;j<N;j++){
			if(m[j]==i){
				printf(" %d",sid[j]);
			}
		}
		printf("\n");
	}
}
