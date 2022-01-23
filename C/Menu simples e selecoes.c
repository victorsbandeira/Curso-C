#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


void main(){

setlocale(LC_ALL,"");

int op;

while( op<1 || op>3){

printf("Escolha uma opção: ");
printf("1 - Opção 1");
printf("2 - Opção 2");
printf("3 - Opção 3");
scanf("%d", &op);

switch(op){
    case 1:
        printf("Opção 1 foi escolhida");
        break;
    case 2:
        printf("Opção 2 foi escolhida");
        break;
   case 3:
        printf("Opção 3 foi escolhida");
        break;
}
}
}


