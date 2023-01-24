#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    char a1[50], a2[50], a3[50];
    int rNum;

    printf("Digite o nome do primeiro aluno: ");
    fgets(a1, 50, stdin);
    printf("Digite o nome do segundo aluno: ");
    fgets(a2, 50, stdin);
    printf("Digite o nome do terceiro aluno: ");
    fgets(a3, 50, stdin);

    srand(time(NULL));
    rNum = rand() % 3;

    switch(rNum){
        case 0:
            printf("O aluno sorteado foi: %s\n", a1);
            break;
        case 1:
            printf("O aluno sorteado foi: %s\n", a2);
            break;
        case 2:
            printf("O aluno sorteado foi: %s\n", a3);
            break;
        default:
            break;
    }    

    return 0;
}