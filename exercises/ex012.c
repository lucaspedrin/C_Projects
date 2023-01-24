#include <stdio.h>

int main() {

    float din, aum;

    printf("Digite um valor: R$");
    scanf("%f", &din);

    aum = din + (din * 15/100);

    printf("Após um aumento de 15%% você agora tem R$%.2f\n", aum);

    return 0;
}