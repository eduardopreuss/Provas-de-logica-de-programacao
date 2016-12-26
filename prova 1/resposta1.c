
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int num, soma_impar=0, qtde_pares=0, maior, menor;
    printf("Digite um valor: ");
    scanf("%d",&num);
    maior=num;
    menor=num;
    while(num!=0){      
        if(num%2==0){
            qtde_pares++;
        } else{
            soma_impar=soma_impar+num;
        }
        if(maior<num) maior=num;
        if(menor>num) menor=num;
        printf("Digite um valor: ");
        scanf("%d",&num);        
    }
    printf("Maior: %d\nMenor: %d\n", maior, menor);
    printf("Soma Impar: %d\nQtde Pares: %d",soma_impar,qtde_pares);

    return (EXIT_SUCCESS);
}

