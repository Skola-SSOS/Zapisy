#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){    
    float a, b;
    printf("Zadej prvni stranu: ");
    scanf("%f", &a);
    printf("Zadej druhou stranu: ");
    scanf("%f", &b);
    if (a == b){
        printf("Jedna se o ctverec s delkou stran %.0f cm a %.0f cm s obsahem: %.0f", a, b, a * b);
    }else{
        printf("Jedna se o obdelnik s delkou stran %.0f cm a %.0f cm s obsahem: %.0f", a, b, a * b);
    }
    return 0;
}