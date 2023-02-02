#include<stdio.h>
#include<stdlib.h>

int ** criaMatrizFloat(int linhas, int colunas){
	int ** matriz = (int**) malloc(linhas*sizeof(int*));
	int linha;
	for (linha= 0; linha< linhas; linha++){
		matriz[linha] = (int*) malloc(colunas*sizeof(int));
	}
}
int main (void){
	
	int linhas = 2;
	int colunas = 2;
	int ** matriz =(int**) malloc(linhas*sizeof(int*));
	int linha;
	for(linha=0; linha<linhas; linha++){
		matriz[linha] = (int*) malloc(colunas*sizeof(int));
	}
		int i, j;
		printf("digite os valores para a matriz:\n");
		for(i=0;i<linhas;i++){
			for(j=0;j<colunas; j++){
			scanf("%f", &matriz[i][j]);
			}
		}
		for(linha=0; linha<linhas;linha++){
			free(matriz[linha]);
		}
		free(matriz);
		return 0;
}
