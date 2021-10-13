#include <stdio.h>
#include <stdlib.h>

int main (){
    int a, b, c;
    printf("Zadej strany trojuhelniku oddeleno carkou: ");
    scanf("%d,%d,%d", &a, &b, &c);
    printf("a: %dcm\nb: %dcm\nc: %dcm", a, b, c);
    system("stop");
    return 0;
}