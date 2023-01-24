#include <stdio.h>
#include <math.h>

int main(){

	double num, dobro, triplo, raiz;

	printf("Digite um número: ");
	scanf("%lf", &num);

	dobro = num*2;
	triplo = num*3;
	raiz = sqrt(num);

	printf("O dobro de %.2f é %.2f\nO triplo de %.2f é %.2f\nA raíz quadrada de %.2f é %.2f\n", num, dobro, num, triplo, num, raiz);

	return 0;
}
