#include<stdio.h>

int main () {
   //UŽIVATELSKÝ VSTUP
   int den;
   int pocetDnu;
   printf("Zadejte vstup ve formatu: (Pocatecni den[1-7]),(Pocete dnu v mesici[28-31])\n");
   scanf("%d,%d", &den, &pocetDnu);
   //Kontrola formátu
   if (!(den <= 7 && 1 <= den)) {
      printf("Pocatecni den musi byt v rozmezi 1 - 7");
      return 1;
   }
   if (!(pocetDnu <= 31 && 28 <= pocetDnu)) {
      printf("Pocet dnu v mesici musi byt v rozmezi 28 - 31");
      return 1;
   }
   printf("\n");

   //ALGORITMUS
   int aktualniden = den;
   aktualniden--;
   int pocetPatku;
   for (int i = 1; i <= pocetDnu; i++)
   {
      printf("%d%s", i, (i < 10) ? ". Den  | " : ". Den | ");
      aktualniden++;
      switch (aktualniden)

      {
      case 1:
         printf("Pondeli");
         break;
      case 2:
         printf("Utery");
         break;
      case 3:
         printf("Streda");
         break;
      case 4:
         printf("Ctvrtek");
         break;
      case 5:
         printf("PATEK");
         pocetPatku++;
         break;
      case 6:
         printf("Sobota");
         break;
      case 7:
         printf("Nedele");
         aktualniden = 0;
         break;
      default:
         break;
      }
      printf("\n%s", (aktualniden == 0) ? "\n" : "");
   }
   printf("%s-------------------------\nPocet patku je: %d\n", (aktualniden == 0) ? "" : "\n" ,pocetPatku);
   scanf("%s"); //Aby se cmd ihned nevypinalo, bohužel když uživatel zadá string misto čísel program se vypne ihned i tak kvuli %s
   return(0);
}