#include<stdio.h>

int main(){
    int i,j,n;
    int correct = 0;
    char arr[100];
    char std[100][100];

    for(i=0;i<20;i++){
        scanf(" %c",&arr[i]);
    }

    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<20;j++){
            scanf(" %c",&std[i][j]);
        }
    }

    for(i=0;i<n;i++){
        correct = 0;
        for(j=0;j<20;j++){
            if(std[i][j] == arr[j]){
                if(j+1<=15){
                	correct++;
				}else if(j+1>=16 && j+1<=18){
					correct = correct+2;
				}else{
					correct = correct+3;
				}
            }
        }
        printf("std %d => %d\n",i+1,correct);
    }
}

