#include <stdio.h>
int main (){float hodnota;printf("Zadej hodnotu v cm: ");scanf("%f", &hodnota);printf("mm %f\ncm %f\ndm %f\nm %f\nkm %f", hodnota * 10, hodnota, hodnota/10, hodnota/100, hodnota/1000000);return 0;}