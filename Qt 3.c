#include<stdio.h>
#include<stdlib.h>

int main(){
	int qnt_frutas, l;
	
	printf("quatidade de frutas:\n");
	scanf("%d", &qnt_frutas);
	
	char **frutas = (char**) malloc(qnt_frutas*sizeof(char*));
	if (frutas == NULL){
		printf("Erro");
		exit(1);
	}
	for(l = 0; l<qnt_frutas; l++){
		frutas[l] = (char*) malloc(50*sizeof(char));
		
	}
	float *preco = (float*) malloc(qnt_frutas*sizeof(float));
	if(preco == NULL){
	 exit(1);
	}
	printf("valor fruta:\n");
	for(l=0;l<qnt_frutas; l++){
		scanf("%[^\n]s", frutas[l]);
		scanf("%f", &preco[l]);
	}
	for(l=0; l<qnt_frutas; l++){
		free(frutas[l]);
	}
	free(frutas[l]);
	free(preco);
	return 0;
}
