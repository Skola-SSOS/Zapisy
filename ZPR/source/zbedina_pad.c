#include <stdio.h>
#include <stdlib.h>
#include <math.h>

const float G = 9.81;
float vypocet(float t);

int main (){    
    float cas;
    printf("Zadej cas[s] : ");
    scanf("%f", &cas);
    printf("Teleso urazi volnym padem za %.0fs %.3fm.", cas, vypocet(cas));
    return 0;
}

float vypocet(float t){
    return (G * t * t)/2;
}