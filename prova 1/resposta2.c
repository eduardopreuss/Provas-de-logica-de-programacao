
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int num, divisores, cont=0,i;
    for(cont=0;cont<10;cont++){
        printf("Digite um numero: ");
        scanf("%d",&num);
        if(num!=0){
            if(num%2==0){
                printf("%d ao quadrado: %d\n",num,num*num);        
            }else{
                divisores=0;
                for(i=1;i<=num;i++){
                    if(num%i==0) divisores++;
                }
                printf("%d possui %d divisores\n",num,divisores);
            }        } else{cont--;     }
    }
    return (EXIT_SUCCESS);
}

