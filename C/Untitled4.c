#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


void main(){

setlocale(LC_ALL,"");

int i, valor, aux=0, resp;


printf("digite um valor: ");
scanf("%d", &valor);

for(i=1; i<=valor; i++){
    if(valor%i==0){
    aux++;
    }
    printf("%d / %d tem o resto = %d e tem %d divisores = 0\n", valor, i, valor%i,aux);
    }


if(aux==2){
    printf("\nO número digitado é primo");
}else{
    printf("\nO número digitado não é primo");
}

printf("\nVocê deseja conferir os valores?");
printf("\n1 - Sim");
printf("\n2 - Não");
scanf("\n%d", &resp);



switch(resp){
case 1:
    if(valor%i==0){
    aux++;
    }
    printf("%d / %d tem o resto = %d e tem %d divisores = 0\n", valor, i, valor%i,aux);
    break;
case 2:
    printf("Obrigado!");
    break;
default:
    printf("opção invalida!");
}
