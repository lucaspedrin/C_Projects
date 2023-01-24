#include <stdio.h>

int main(){

    float cel, fah;

    printf("Digite o valor em °C: ");
    scanf("%f", &cel);

    fah = (cel * 9/5) + 32;
    
    printf("%.2f°C equivalem a %.2f°F\n", cel, fah);

    return 0;
}