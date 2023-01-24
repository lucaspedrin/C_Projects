#include <stdio.h>
#include <math.h>

int main(){

    float ang, seno, coss, tang;

    printf("Digite um ângulo: ");
    scanf("%f", &ang);

    seno = sin(ang);
    coss = cos(ang);
    tang = tan(ang);

    printf("O seno de %.2f é: %f\n", ang, seno);
    printf("O cosseno de %.2f é: %f\n", ang, coss);
    printf("A tangente de %.2f é: %f\n", ang, tang);

    return 0;
}