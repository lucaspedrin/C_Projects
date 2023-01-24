#include <stdio.h>

int main(){

    float din, descnt;

    printf("Insira o valor do produto: R$");
    scanf("%f", &din);

    descnt = din - (din * 5/100); //desconto de 5%

    printf("Após um desconto de 5%% seu produto agora vale R$%.2f\n", descnt);

    return 0;
}