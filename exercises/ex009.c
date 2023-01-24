#include <stdio.h>

int main(){

    float real, dolar;

    printf("Insira um valor em R$");
    scanf("%f", &real);

    dolar = real / 5.17; //Utilizando a cotação atual (20/01/2023)

    printf("R$%.2f equivale a U$%.2f\n", real, dolar);

    return 0;
}