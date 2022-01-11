#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main (){
    int sudacisla = 0, lichacisla = 0, pocetLich = 0 , pocetSud = 0, cislo = 0;
    srand(time(NULL));

    cislo = 1;
    while(cislo != 0)
    {
        cislo = rand() % 20;

        switch (cislo % 2 ){
            case 0:
                pocetSud++;
                sudacisla += cislo;
                break;
            case 1:
                pocetLich++;
                lichacisla += cislo;
                break;
        }
        printf("%d\n", cislo);
    }

    printf("\nSuda cisla\n----------\nPocet: %d, prumer: %.2f\n\nLicha cisla\n----------\nPocet %d, prumer: %.2f\n", pocetSud, (float) sudacisla / pocetSud, pocetLich, (float) lichacisla / pocetLich);
    return 0;
}