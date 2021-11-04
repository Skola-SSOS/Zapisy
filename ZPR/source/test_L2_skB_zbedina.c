#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float vypocet(int first, int second);

int main (){    
    int r1, r2;
    printf("Zadej odpory: \nR1 = ");
    scanf("%d", &r1);
    printf("R2 = ");
    scanf("%d", &r2);
    printf("Vysledny odpor paralelniho zapojeni odporu je %.3f", vypocet( r1, r2));
    return 0;
}

float vypocet(int first, int second){
    return (float) ( first *  second) / (first + second);
}