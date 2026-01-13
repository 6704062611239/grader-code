#include<stdio.h>

int main(){
    int k,i,j,n;
    int correct = 0;

    scanf("%d",&k);

    char arr[k];
    char std[100][100];

    // ???????
    for(i=0;i<k;i++){
        scanf(" %c",&arr[i]);
    }

    scanf("%d",&n);

    // ????????????????
    for(i=0;i<n;i++){
        for(j=0;j<k;j++){
            scanf(" %c",&std[i][j]);
        }
    }

    // ?????????
    for(i=0;i<n;i++){
        correct = 0;
        for(j=0;j<k;j++){
            if(std[i][j] == arr[j]){
                correct++;
            }
        }
        printf("std %d => %d\n", i+1, correct);
    }

    return 0;
}

