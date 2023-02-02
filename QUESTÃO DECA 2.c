#include<stdio.h>
#include<stdlib.h>

int main (void){
	
	int linhas = 2;
	int colunas = 2;
	float ** matriz =(float**) malloc(linhas*sizeof(float*));
	int linha;
	for(linha=0; linha<linhas; linha++){
		matriz[linha] = (float*) malloc(colunas*sizeof(float));
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
