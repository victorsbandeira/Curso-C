#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

setlocale(LC_ALL,"");

int n1,n2,n3, resultado;


printf("digite 3 valores inteiros:");
scanf("%d %d %d", &n1,&n2,&n3);
resultado = n1*n2*n3;
printf("o resultado é: %d", resultado);


}
