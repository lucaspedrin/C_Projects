#include <stdio.h>
#include <math.h>

int main(){

    float num;
    int iNum;

    printf("Digite um número real: ");
    scanf("%f", &num);

    iNum = trunc(num);

    printf("A parte inteira do número %.2f é %d\n", num, iNum);

    return 0;
}