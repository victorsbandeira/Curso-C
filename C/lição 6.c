#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

setlocale(LC_ALL,"");
int opcao;
float n1, n2;

printf("Insira dois valores: \n");
printf("Primeiro valor: ");
scanf("%f", &n1);
printf("Segundo valor: ");
scanf("%f", &n2);

printf("Escolha uma opcao abaixo:\n");
printf("1 - Somar:\n");
printf("2 - Subtrair:\n");
printf("3 - Multiplicar:\n");
printf("4 - Dividir:\n");
printf("Digite aqui a op��o: ");
scanf("\n%d", &opcao);

switch (opcao){
case 1:
    printf("A soma �: %.1f", n1+n2);
    break;
case 2:
    printf("A subtra��o �: %.1f ", n1-n2);
    break;
case 3:
    printf("A multiplica��o �: %.1f ", n1*n2);
    break;
case 4:
   printf("A divis�o �: %.1f ", n1/n2);
    break;
default:
        printf("Opcao invalida");
    break;
}}
