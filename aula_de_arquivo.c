#include<stdio.h>

int main (){
    int c;
    int nlinhas = 0;
    FILE * fp;
    fp = fopen("entrada.txt", "rt");
    if (fp ==NULL){
        printf("erro ao abrir arquivo");
        exit(1);
    return 1;
    }
    else{
        printf("ARQUIVO CRIADO\n");
    }
    while ((c = fgetc(fp)) != EOF){
        if(c =='\n'){
        nlinhas++;
        }
    }
     fclose(fp);

    printf("Numero de linhas = %d\n", nlinhas);
    return 0;
}
