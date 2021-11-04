#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float vypocet(float first, float second);
const int DENHODIN = 24;

int main (){    
    float den, hodin;
    printf("Zadej pocet dnu: ");
    scanf("%f", &den);
    printf("Zadej pocet hodin: ");
    scanf("%f", &hodin);
    printf("%.0f dnu a %.0f hodin je celkem %.0f hodin", den, hodin, vypocet(den, hodin));
    return 0;
}

float vypocet(float den, float hodin){
    return DENHODIN * den + hodin;
}