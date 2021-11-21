#include <stdio.h>
int main (){
    float mzda, dan;
    printf("Zadej mzdu: ");
    scanf("%f", &mzda);
    if (mzda > 10000)
    {
        dan = 10000 * 0.1;
        if (mzda > 20000)
        {
            dan = dan + 10000 * 0.2;
            dan = dan + (mzda - 20000) * 0.3;
        } 
        else
        {
            dan = dan + (mzda - 10000) * 0.2;
        }
    } 
    else
    {
        dan = mzda * 0.1;
    }
    printf("Dan je %.0f", dan);
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