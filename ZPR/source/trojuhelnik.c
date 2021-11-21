#include <stdio.h>

int main() {
    float a, b, c;
    printf("Zadej uhel alfa: ");
    scanf("%f", &a);
    printf("Zadej uhel beta: ");
    scanf("%f", &b);
    printf("Zadej uhel gama: ");
    scanf("%f", &c);
    printf("Soucet zadanych uhlu %0.f, %0.f, %0.f je %0.f. %s", a, b ,c , a + b + c, ((a + b + c) > 180) ? "Nejedna se o trojuhelnik" : "Jedna se o trojuhelnik" );
    return 0;
}
