#include <stdio.h>
#include <stdlib.h>

int maior(int a, int b, int c){
    int m=a;
    if(m<b)m=b;
    if(m<c)m=c;
    return m;
}

int menor(int a, int b, int c){
    int m = a;
    if (b<m)m=b;
    if (c<m)m=c;
    return m;
}

void item3(int *a, int* b, int * c){
    *a = maior(*a,*b,*c);
}

void trocaBC(int *a, int* b, int * c){
    int aux= *b;
    *b = *c;
    *c = aux;
}

int main(int argc, char** argv) {
    int a,b,c;
    printf("Digite o valor de A: ");
    scanf("%d",&a);
    printf("Digite o valor de B: ");
    scanf("%d",&b);
    printf("Digite o valor de C: ");
    scanf("%d",&c);
    maior(a,b,c);
    menor(a,b,c);
    
    printf("A=%d, B=%d, C=%d\n",a,b,c);    
    printf("Maior Numero: %d\n",maior(a,b,c));
    item3(&a,&b,&c);        
    printf("variavel ''a' com o maior valor: A=%d, B=%d, C=%d\n",a,b,c);
    trocaBC(&a,&b,&c);
    printf("Depois trocaBC: A=%d, B=%d, C=%d\n",a,b,c);
    return (EXIT_SUCCESS);
}


