#include <stdio.h>
int main (){
    int znamka;
    printf("Zadej znamku: ");
    scanf("%d", &znamka);
    if (znamka == 1){
        printf("Vyborny");
    }
    if (znamka == 2){
        printf("Chvalitebny");
    }
    if (znamka == 3){
        printf("Dobry");
    }
    if (znamka == 4){
        printf("Dostacujici");
    }
    if (znamka == 5){
        printf("Nedostatecny");
    }
    if (znamka > 5){
        printf("Cislo mimo dosah");
    }

    return 0;
}

/*
███████╗███████╗███████╗
██╔════╝╚════██║╚════██║
█████╗░░░░███╔═╝░░███╔═╝
██╔══╝░░██╔══╝░░██╔══╝░░
███████╗███████╗███████╗
╚══════╝╚══════╝╚══════╝
*/