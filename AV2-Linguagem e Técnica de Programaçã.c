#include <stdio.h> 
 
int main(){
int a, b, matriz[3][3];
for(a=0; a<3; a++)
for(b=0; b<3; b++){
printf("elemento[%d][%d]=",a,b);
scanf("%d", &matriz[a][b]);
}
printf("\n matriz 3x3 \n");
for(a=0; a<3; a++){
for(b=0; b<3; b++)
printf("%d ",matriz[a][b]);
printf("\n");
}
for(a=0; a<3; a++)
for(b=0; b<3; b++)
matriz[a][b] = matriz[a][b] * 5;
printf("\n matriz 3x3 multiplicada por cinco \n");
for(a=0; a<3; a++){
for(b=0; b<3; b++)
printf("%d ",matriz[a][b]);
printf("\n");
}
return 0;
}

