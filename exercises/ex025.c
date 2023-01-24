#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){

    int inicial, pVida, iVida, pAtq, iAtq, pCura, turno;
    char confirm;

    system("clear");

    printf("Seja bem-vindo a Batalha de monstros!\n\n");
    
    label_inicial:
        do{
            printf("Escolha seu monstro:\n\n");
            sleep(1);

            printf("1 - SILVERACLE\n");
            sleep(1);
            printf("2 - FIERHAWK\n");
            sleep(1);
            printf("3 - FLAPET\n");
            sleep(1);

            printf("\nQual a sua escolha? ");
            scanf("%d", &inicial);

            system("clear");
        }while(inicial > 3 || inicial < 1);

        switch(inicial){
            case 1:
                sleep(1);
                printf("SILVERACLE\n");
                sleep(1);
                printf("VIDA: 30\n");
                sleep(1);
                printf("ATQ: 15\n");
                sleep(1);
                printf("CURA: 15\n");
                pVida = 30;
                pAtq = 15;
                pCura = 15;
                break;
            case 2:
                sleep(1);
                printf("FIERHAWK\n");
                sleep(1);
                printf("VIDA: 18\n");
                sleep(1);
                printf("ATQ: 28\n");
                sleep(1);
                printf("CURA: 14\n");
                pVida = 18;
                pAtq = 28;
                pCura = 14;
                break;
            case 3:
                sleep(1);
                printf("FLAPET\n");
                sleep(1);
                printf("VIDA: 20\n");
                sleep(1);
                printf("ATQ: 20\n");
                sleep(1);
                printf("CURA: 20\n");
                pVida = 20;
                pAtq = 20;
                pCura = 20;
                break;
        }
    
    sleep(1);
    printf("Você tem certeza da sua escolha? [S/N]: ");
    scanf(" %c", &confirm);

    if( confirm == 'S' || confirm == 's' ){
        system("clear");
    }else{
        system("clear");
        goto label_inicial;
    }

    sleep(1);
    printf("Um monstro selvagem apareceu!\n\n");

    iVida = 85;
    iAtq = 6;

    sleep(1);
    printf("DRACYLE\n");
    sleep(1);
    printf("VIDA: %d\n", iVida);
    sleep(1);
    printf("ATQ: %d\n", iAtq);
    sleep(1);

    system("clear");
    sleep(1);

    while(pVida > 0 && iVida > 0){
        printf("Seu turno!\n");
        sleep(1);
        printf("Você tem %d de vida.\n", pVida);
        printf("Dracyle tem %d de vida.\n\n", iVida);
        sleep(1);
        printf("1 - ATACAR\n2 - CURAR\n\n");
        printf("Digite sua ação: ");
        scanf("%d", &turno);
        printf("\n");
        sleep(1);
        switch(turno){
            case 1:
                printf("Você atacou Dracyle!\n");
                sleep(1);
                printf("Você causou %d de dano.\n", pAtq);
                iVida -= pAtq;
                break;
            case 2:
                printf("Você curou %d de vida!\n", pCura);
                pVida += pCura;
                break;
            default:
                printf("Opção inválida! você desperdiçou seu turno.\n");
                break;
        }
        
        if(iVida < 0){
            break;
        }

        sleep(1);
        printf("\nTurno do Dracyle!\n\n");
        sleep(1);
        printf("Dracyle te atacou!\n");
        sleep(1);
        printf("Dracyle te causou %d de dano.\n", iAtq);
        pVida -= iAtq;
        sleep(2);

        if(pVida < 0){
            break;
        }

        system("clear");
    }

    if(pVida > 0){
        printf("\nParabéns você derrotou Dracyle!\n\n");
    }else{
        printf("Que pena... você foi derrotado.\n\n");
    }

    return 0;
}
