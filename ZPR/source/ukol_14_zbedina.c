#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main ()
{
    FILE *f;
    f = fopen("cela03.txt", "r");
    int cislo, cisel, lichychkladnych;
    while (fscanf(f, "%d", &cislo) != EOF)
    {
        if (cislo > 0 && cislo % 2 == 1)
        {
            printf("%d\n", cislo);
            lichychkladnych++;
        }
        cisel++;
    }
    fclose(f);
    printf("\n\nCelkem pocet cisel: %d\nPocet vypsanych cisel: %d",cisel ,lichychkladnych);

    return 0;
}
