#include <stdio.h>

int main(){

	int num, suc, ant;

	printf("Digite um número: ");
	scanf("%d", &num);

	suc = num + 1;
	ant = num - 1;

	printf("O sucessor de %d é %d e o antecessor é %d\n", num, suc, ant);

	return 0;
}
