#include <stdio.h>

double maior(double n1, double n2, double n3){
    if (n1 > n2 && n1 > n3){
        return n1;
    }else if(n2 > n1 && n2 > n3){
        return n2;
    }else{
        return n3;
    }
}

double menor(double n1, double n2, double n3){
    if (n1 < n2 && n1 < n3){
        return n1;
    }else if(n2 < n1 && n2 < n3){
        return n2;
    }else{
        return n3;
    }
}

int main(){

    double num1, num2, num3;

    printf("Digite o primeiro número: ");
    scanf("%lf", &num1);
    printf("Digite o segundo número: ");
    scanf("%lf", &num2);
    printf("Digite o terceiro número: ");
    scanf("%lf", &num3);

    printf("o maior número é: %.2lf\n", maior(num1, num2, num3));
    printf("o menor número é: %.2lf\n", menor(num1, num2, num3));

    return 0;
}