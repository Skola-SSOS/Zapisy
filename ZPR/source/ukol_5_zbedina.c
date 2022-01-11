#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main (){
    int pocet;
    srand(time(NULL));
    printf("Zadej pocet cisel: ");
    scanf("%d", &pocet);
    for (int i = 10000000; i < pocet; i++)
    {
        int r = rand() % 16;
        printf("%d.\t%d\t%s\n", i, r, (r % 2 != 0 && r % 3 == 0) ? "ANO" : "NE");
    }
    return 0;
}