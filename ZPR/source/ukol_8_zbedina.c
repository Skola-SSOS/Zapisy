#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main (){
    int cislo = 0, puvodnicislo, cifernysoucet = 0;
    printf("Zadej cislo: ");
    scanf("%d", &cislo);
    puvodnicislo = cislo;

    while (cislo != 0 ){
        cifernysoucet += cislo % 10;
        cislo /= 10;
    }
    printf("Ciferny soucet cisla %d je : %d", puvodnicislo, cifernysoucet);
    return 0;
}