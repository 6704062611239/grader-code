#include <stdio.h>
int main() {
    int unit;
    while (1) {
        scanf("%d", &unit);
        
        if (unit == -1)
            break;
            
        double cost = 0.0;
        
        if (unit <= 50) {
            cost = 0.0;
        } else {
            int u = unit;
            if (u > 100) {
                cost = (u-100)*3.00+cost;
                u = 100;
            }
            if (u > 55) {
                cost = (u-55)*2.50+cost;
                u = 55;
            }
            if (u > 15) {
                cost = (u-15)*2.00+cost;
                u = 15;
            }
            cost = u*1.50+cost;
        }
        printf("%.2f\n", cost);
    }
}

