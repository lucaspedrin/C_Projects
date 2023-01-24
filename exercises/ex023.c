#include <stdio.h>

void triang(float a, float b, float c){

    if (a < b+c && b < a+c && c < a+b){
        printf("É possível formar um triângulo!\n");
    }else{
        printf("Não é possível formar um triângulo.\n");
    }

}

int main(){

    float n1, n2, n3;

    printf("Digite o primeiro segmento: ");
    scanf("%f", &n1);
    printf("Digite o segundo segmento: ");
    scanf("%f", &n2);
    printf("Digite o terceiro segmento: ");
    scanf("%f", &n3);

    triang(n1, n2, n3);
    
    return 0;
}