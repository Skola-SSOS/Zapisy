#include<stdio.h>

int main () {
   int celkem, cislo;
   for (int i = 1; i < 6; i++)
   {
      printf("Zadej %d. cislo: ", i);
      scanf("%d", &cislo);
      celkem += cislo;
   }
   printf("Celkem: %d", celkem);
   return(0);
}
