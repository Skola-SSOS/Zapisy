#include <stdio.h>
#include <stdlib.h>

int main (){
    int a;
    printf("Zadej puvodni cenu: ");
    scanf("%d", &a);
    printf("Cena po 15%% sleve je: %.2fKc", a -(a * 0.15));
    return 0;

}