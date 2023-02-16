#include<stdio.h>
#include<stdlib.h>
//criar o enum Genero
typedef enum genero{
	MASCULINO,
	FEMININO,
	NEUTRO
}Genero;
//criar a struct pessoa
typedef struct pessoa{
	char nome[50];
	int idade;
	Genero genero;
}Pessoa;
int main(void){
	Pessoa pessoa; // variavel
	printf("Informe seu nome:\n");
	scanf("%[^\n]s", pessoa.nome);
	printf("Informe sua idade:\n ");
	scanf("%d", &pessoa.idade);
	printf("Informe seu genero:\n");
	scanf("%d", (int*) &pessoa.genero);
	printf("SEU NOME: %s\n SUA IDADE: %d\n", pessoa.nome, pessoa.idade);
	pessoa.genero==MASCULINO?("Masculino:"):printf("GENERO: Feminino");
	return 0;
}
