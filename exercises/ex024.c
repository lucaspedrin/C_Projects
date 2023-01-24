#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

void jogador(int escolha){
    switch(escolha){
        case 1:
            printf("Você jogou Pedra!\n");
            break;
        case 2:
            printf("Você jogou Papel!\n");
            break;
        case 3:
            printf("Você jogou Tesoura!\n");
            break;
        default:
            break;
    }
}

void computador(int escolha){
     switch(escolha){
        case 1:
            printf("O computador jogou Pedra!\n");
            break;
        case 2:
            printf("O computador jogou Papel!\n");
            break;
        case 3:
            printf("O computador jogou Tesoura!\n");
        default:
            break;
    } 
}

int main(){

    int jogada=0, comp;

    printf("----- JOKENPÔ -----\n");
    printf("[1] - Pedra\n[2] - Papel\n[3] - Tesoura\n");
    
    while(jogada==0){
        printf("Insira sua jogada: ");
        scanf("%d", &jogada);
        if(jogada > 3 || jogada < 1){
            printf("Opção inválida! tente novamente.\n");
            jogada = 0;
        }
    }

    srand(time(NULL));
    comp = rand() % 3 + 1;

    jogador(jogada);
    sleep(1);
    computador(comp);
    sleep(1);

    if(jogada == comp){
        printf("EMPATE!\n");
    }else if((jogada==1 && comp==2) || (jogada==2 && comp==3) || (jogada==3 && comp==1)){
        printf("DERROTA!\n");
    }else{
        printf("VITÓRIA!\n");
    }

    return 0;
}