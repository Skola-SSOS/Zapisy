#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main (){
    int cislo, celkem = 0, prijmy = 0, vydaje = 0;
    printf("Zadej prijem nebo vydaj: ");
    scanf("%d", &cislo);
    while (cislo != 0)
    {
        if (cislo < 0) vydaje += cislo;
        else prijmy += cislo;
        celkem += cislo;
        printf("Zadej prijem nebo vydaj: ");
        scanf("%d", &cislo);
    }
    printf("\nPrijmy: %d\tVydaje: %d\t%s: %d", prijmy, vydaje, (celkem > 0) ? "Vynos" : "Ztrata", celkem);
    return 0;
}