#include <stdio.h>
#include <string.h>

int main(){

	char nome[20];

	printf("Digite seu nome: ");
	fgets(nome, 20, stdin);
	nome[strlen(nome) - 1] = '\0';

	printf("Bem vindo, %s\n", nome);
	
	return 0;
}
