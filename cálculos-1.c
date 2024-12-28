#include <stdio.h>

int main(){

int A, B, soma, subtra, divis, multiplica;

printf("digite o valor:\n");
scanf("%d",&A);
printf("digite o valor:\n");
scanf("%d",&B);

soma = A+B;
subtra = A-B;
divis = A/B;
multiplica = A*B;

printf("Resultados:\n");
printf("subtra.:%d.\n",subtra);
printf("divis.:%d.\n",divis);
printf("multiplica.:%d.\n",multiplica);
printf("soma:%d.\n",soma);
}
