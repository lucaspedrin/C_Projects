#include <stdio.h>

int main(){

    float alt, lar, area, litro;

    printf("Qual é a altura da parede: ");
    scanf("%f", &alt);
    printf("Qual é a largura da parede: ");
    scanf("%f", &lar);

    area = alt * lar;
    litro = area / 2; //1l de tinta pintam 2m² de parede

    printf("Serão necessários %.2fl de tinta para pintar a área de %.2fm²\n", litro, area);

    return 0;
}