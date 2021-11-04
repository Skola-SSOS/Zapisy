#include <stdio.h>

int main() 
{
    float x;
    printf("Zadej cislo: ");
    scanf("%f", &x);
    if (x == 0) printf("timto cislem se neda delit");
    else printf("Obracena hodnota cisla je : %f", 1/x);
    return 0;
}
