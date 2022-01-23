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
    //printf("%d / %d tem o resto = %d e tem %d divisores = 0\n", valor, i, valor%i,aux);
    }


if(aux==2){
    printf("\nO número digitado é primo");
}else{
    printf("\nO número digitado não é primo pois ele possui %d divisores", aux);
}
while(resp<1 || resp>2){
printf("\nVocê deseja conferir os valores?");
printf("\n1 - Sim");
printf("\n2 - Não\n");
scanf("\n%d", &resp);


switch(resp){
case 1:
    for(i=1; i<=valor; i++){
    if(valor%i==0){
    aux++;
    }
    printf("%d / %d tem o resto = %d\n", valor, i, valor%i);
}
    break;
case 2:
    printf("Obrigado!");
    break;
default:
    printf("opção invalida!");
    break;
}


}
}

