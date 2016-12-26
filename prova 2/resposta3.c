#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char nome[40];
    char ende[40];
    char fone[15];
}contato;

void ler(contato * c){
    printf("Nome: ");
    gets(c->nome);
    printf("Endereco: ");
    gets(c->ende);
    printf("Fone: ");
    gets(c->fone);
}

void escreve(contato c){
    printf("Nome: %s\n",c.nome);
    printf("Endereco: %s\n",c.ende);
    printf("Fone: %s\n",c.fone);
}

int main(int argc, char** argv) {
    contato lista[2];
    int i;
    for(i=0;i<2;i++) ler(&lista[i]);
    for(i=0;i<2;i++) escreve(lista[i]);
    return (EXIT_SUCCESS);
}

