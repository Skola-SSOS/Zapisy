#include <stdio.h>

int main() 
{
    float hornimez, dolnimez, cislo;
    printf("Vypis: hornimez,dolnimez,cislo\n");
    scanf("%f,%f,%f", &hornimez, &dolnimez, &cislo);
    if (hornimez < dolnimez)
    {
        int temp = hornimez;
        hornimez = dolnimez;
        dolnimez = temp;
    }
    printf("%s", (cislo < hornimez && dolnimez > cislo) ? "patri" : "nepatri" );
    return 0;
}
