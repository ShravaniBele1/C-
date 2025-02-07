#include<stdio.h>

int main() {
    float w, charge = 0;

    printf("Enter water usage in liters: ");
    scanf("%f", &w);

    if (w <= 1000) {
        charge = 150;
    }
    else if (w > 1000 && w <= 2000) {
        charge = 150 + (w - 1000) * 0.175;
    }
    else if (w > 2000 && w <= 3000) {
        charge = 150 + 175 + (w - 2000) * 0.200;
    }
    else {
        charge = 700;
    }

    printf("Total charges are: %.2f\n", charge);
    
    return 0;
}

