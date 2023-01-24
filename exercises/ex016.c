#include <stdio.h>  
#include <math.h>

float calcHip(float a, float b){
    float c = sqrt(pow(a,2) + pow(b,2));
    return c;
}

int main(){

    float c1, c2;

    printf("Digite o primeiro cateto: ");
    scanf("%f", &c1);
    printf("Digite o segundo cateto: ");
    scanf("%f", &c2);

    printf("A hipotenusa é: %f\n", calcHip(c1, c2));

    return 0;
}