#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <string.h>
int reverse(int n);
int main()
{
   int cislo, pozice;
   printf("Zadejte cislo a pozici: ");
   scanf("%d %d", &cislo, &pozice);
   int mincislo = cislo;
   if (pozice -1 > sizeof(cislo)){
      printf("Tato pozice u tohoto cisla neni");
      return 0;
   }
   cislo = reverse(cislo);
   int cifry[256];
   int i = 1;
   int cifranapozici;
   while(cislo != 0){
      if (i == pozice) cifranapozici = cislo % 10;
      i++;
      cislo /= 10;
   }
   printf("%d. cifra u cisla %d je %d", pozice ,mincislo, cifranapozici);
}
int reverse(int n){
   int reverse=0, rem; 
   while(n!=0)    
   {    
      rem=n%10;    
      reverse=reverse*10+rem;    
      n/=10;    
   } 
   return reverse;
}