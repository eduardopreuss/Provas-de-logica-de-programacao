
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int voto, c1=0,c2=0,c3=0,c4=0,branco=0,nulo=0,validos=0;
    do{
        printf("Digite seu voto: ");
        scanf("%d",&voto);
        switch(voto){
            case 0:break;
            case 11: c1++;break;
            case 22: c2++;break;
            case 33: c3++;break;
            case 44: c4++;break;
            case 77: branco++;break;
            default: nulo++;break;
        }
    }while(voto!=0);
    validos=c1+c2+c3+c4+branco;
    printf("Candidata 1: %d votos (%.2f%%)\n",c1,c1*100.0/validos);
    printf("Candidata 2: %d votos (%.2f%%)\n",c2,c2*100.0/validos);
    printf("Candidata 3: %d votos (%.2f%%)\n",c3,c3*100.0/validos);
    printf("Candidata 4: %d votos (%.2f%%)\n",c4,c4*100.0/validos);
    printf("Votos Brancos: %d votos (%.2f%%)\n",branco, branco*100.0/validos);
    printf("Votos Nulos: %d votos\n",nulo);
    return (EXIT_SUCCESS);
}

