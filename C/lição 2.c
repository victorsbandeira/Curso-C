#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

setlocale(LC_ALL,"");

float nota1, nota2, diferenca;

printf("digite a nota 1:");
scanf("%f", &nota1);
printf("digite a nota 2:");
scanf("%f", &nota2);
diferenca = nota1 - nota2;
printf("o valor absoluto é: %f", fabs (diferenca) );
}
