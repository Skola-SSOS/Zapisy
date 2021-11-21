#include<stdio.h>

int main () {
   int den = 1;
   int pocetdnu = 32;
   printf("Zadejte vstup ve formatu: (Pocatecni den[1-7]),(Pocete dnu v mesici[28-31])\n");
   scanf("%d,%d", &den, &pocetdnu);
   if (!(den <= 7 && 1 <= den)) {
      printf("Pocatecni den musi byt v rozmezi 1 - 7");
      return 1;
   }
   if (!(pocetdnu <= 31 && 28 <= pocetdnu)) {
      printf("Pocet dnu v mesici musi byt v rozmezi 28 - 31");
      return 1;
   }
   int patky = pocetdnu / 7;
   switch (pocetdnu % 7)
   {
   case 1:
      patky += ((den == 5)? 1 : 0);
      break;
   case 2:
      patky += ((den == 5) || (den + 1 == 5)  ? 1 : 0);
      break;
   case 3:
      patky += ((den == 5) || (den + 1 == 5) || (den + 2 == 5)  ? 1 : 0);
      break; 
   default:
      break;
   }
   printf("V zadanem mesici je %d patku", patky);
}