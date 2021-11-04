#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    float a, b;
    printf("Zadej \"a\" a \"b\": ");
    scanf("%f %f", &a, &b);
    printf("Strana c = %f", sqrt( a * a + b * b ) );
    return 0;
}