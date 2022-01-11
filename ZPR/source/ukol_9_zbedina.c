#include <stdio.h>
int main (){
    int vet, slov;
    char pismeno;
    printf("Zadejte text: ");

    scanf("%c", &pismeno);
    while (pismeno != '\n')
    {
        switch(pismeno)
        {
            case ' ':
                slov++;
                break;
            case '?':
                vet++;
                break;
            case '.':
                vet++;
                break;
            case '!':
                vet++;
                break;
        }
        scanf("%c", &pismeno);
    }
    slov++;
    printf("Vet: %d \nSlov: %d",vet, slov);
    return 0;
}