#include <stdio.h>
#include <stdlib.h>

void leitura(int matriz[2][5]){
    int l,c;
    for (l=0;l<2;l++){
        for(c=0;c<5;c++){
            printf("Digite posicao %d, %d: ",l+1,c+1);
            scanf("%d",&matriz[l][c]);
        }
    }    
}

int somaLinha(int mat[2][5],int l){
    int i, soma=0;
    for(i=0;i<5;i++){
        soma=soma+mat[l][i];
    }
    return soma;
}

int somaMatriz(int mat[2][5]){
    return somaLinha(mat,0)+somaLinha(mat,1);
}

void mostraMatriz(int mat[2][5]){
    int l,c;
    for(l=0;l<2;l++){
        for(c=0;c<5;c++){
            printf("\t%d",mat[l][c]);
        }
        printf("\n");
    }
}

int maior(int mat[2][5]){
    int m=mat[0][0];
    int l,c;
    for(l=0;l<2;l++){
        for(c=0;c<5;c++){
            if(m<mat[l][c]) m=mat[l][c];
        }
    }
    return m;
}


int main(int argc, char** argv) {
    int matriz[2][5];
    leitura(matriz);
    printf("Soma da Linha 1: %d\n",somaLinha(matriz,0));
    printf("Soma da Linha 2: %d\n",somaLinha(matriz,1));
    
    printf("soma da Matriz: %d\n", somaMatriz(matriz));
    mostraMatriz(matriz);
    
    printf("Maior Numero: %d",maior(matriz));
    return (EXIT_SUCCESS);
}
