#include<stdio.h>
int check(int A[], int B[], int length);
void printmember(int A[], int B[], int length);

int main(){
	int i,n;
	scanf("%d",&n);
	int a[n];
	int b[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		scanf("%d",&b[i]);
	}
	printf("%d\n",check(a,b,n));
	printmember(a,b,n);
}

int check(int A[], int B[], int length){
	int i,c=0;
	for(i=0;i<length;i++){
		if(A[i]>B[i]){
			c++;
		}
	}
	return c;
}

void printmember(int A[], int B[], int length){
	int i,c=0;
	for(i=0;i<length;i++){
		if(A[i]>B[i]){
			printf("%d",i+1);
		}
	}
}
