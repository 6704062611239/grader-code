#include <stdio.h>

int main() {
    int h,r;
    
    scanf("%d %d", &h, &r);
    
    float p = h*r;
    
    if(p<=10000){
    	printf("%.1f",p);
	}else{
		if(p>10000 && p<=20000){
			float x = (p-10000)*0.08;
			printf("%.1f",p-x);
		}else{
			float x = ((p-20000)*0.1)+800;
			printf("%.1f",p-x);
		}
	}
}

