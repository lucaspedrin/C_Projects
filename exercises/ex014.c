#include <stdio.h>

int main(){

    int alg;
    float km, tAlg, tKm;

    printf("Quantidade de dias em que o carro foi alugado: ");
    scanf("%d", &alg);

    printf("Quantidade de km percorridos: ");
    scanf("%f", &km);

    tAlg = alg * 60; //R$60,00 para cada dia de aluguel
    tKm = km * 0.15; //R$0,15 para cada km percorrido

    printf("Você alugou o carro por %d dias e percorreu %.2fkm.\n", alg, km);
    printf("Você deverá pagar R$%.2f pelo aluguel e R$%.2f pelos km percorridos.\n", tAlg, tKm);
    printf("Total: R$%.2f\n", tAlg + tKm);

    return 0;
}