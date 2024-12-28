#include <stdio.h> 
 
int main(){
int inicial, final, contador, quantidade_de_pares = 0;
while(inicial>=final){
printf("digite o numero inicial:\n");
scanf("%d", &inicial);
printf("digite o numero final:\n");
scanf("%d", &final);
}
for(inicial=contador; contador<=final; contador++){
if(contador%2==0){
	printf("O numero %d e par \n", contador);
	quantidade_de_pares++;
}
else
printf("O numero e %d e impar \n", contador);

}
printf("A quantidade de numeros pares e de %d \n",quantidade_de_pares);

return 0; 
}

