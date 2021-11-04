#include <stdio.h>
#include <stdlib.h>

int main (){
    float a, b;
    printf("Vypocet DPH\n============\nZadej cenu nakupu: ");
    scanf("%f", &a);
    printf("Zadej procento DPH: ");
    scanf("%f", &b);
    printf("----------------------\n");
    printf("Cena s DPH: %.2f Kc\n", a);
    printf("Sazba DPH: %.2f%%\n", b);
    printf("Vyse DPH: %.2f Kc\n", (b/100) * a);
    printf("Cena bez DPH: %.2f Kc\n", a - ((b/100) * a));
    return 0;
}