#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int num, Snum, ok=0;

    srand(time(NULL));
    Snum = rand() % 11;

    printf("Um número de 0 a 10 foi sorteado!\n");
    printf("Você tem 5 tentativas para descobrir!\n");

    for (int i=1; i<=5; i++){
        printf("%d° tentativa\n", i);
        printf("Digite um número(de 0 a 10): ");
        scanf("%d", &num);

        if (num == Snum){
            ok = 1;
            break;
        }

    }

    if(ok == 1){
        printf("Você ganhou! o número sorteado era: %d\n", Snum);
    }else{
        printf("Você perdeu... o número sorteado era: %d\n", Snum);
    }

    return 0;
}