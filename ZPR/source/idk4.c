#include<stdio.h>

int main () {
   int a, b;
   scanf("%d,%d", &a , &b);
   printf("Cislo %d %s delitelne cislem %d", a, (a % b == 0 && b != 0) ? "je": "neni", b);
   return(0);
}