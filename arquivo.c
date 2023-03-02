#include<stdio.h>
#include<ctype.h>

int main (){
    int c;
    char entrada[121];
    char saida[121];
    FILE *e;
    FILE *s;
    printf("Digite o nome do arquivo de entrada:\n");
    scanf("%120s", entrada);
      printf("Digite o nome do arquivo de saida:\n");
    scanf("%120s", saida);
    e = fopen(entrada, "rt");
    s = fopen(saida, "wt");
    if(e == NULL){
        printf("Erro! Arquivo de entrada\n");
        return 1;
    }
    else if(s == NULL){
        printf("Erro! Arquivo de saida\n");
        fclose(e);
        return(1);
    }
    while((c = fgetc(e))!= EOF){
        fputc(toupper(c), s);
    }
    fclose(e);
    fclose(s);
    return (0);
}
