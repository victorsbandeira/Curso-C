#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


void main(){

setlocale(LC_ALL,"");

int op;

while( op<1 || op>3){

printf("Escolha uma op��o: ");
printf("1 - Op��o 1");
printf("2 - Op��o 2");
printf("3 - Op��o 3");
scanf("%d", &op);

switch(op){
    case 1:
        printf("Op��o 1 foi escolhida");
        break;
    case 2:
        printf("Op��o 2 foi escolhida");
        break;
   case 3:
        printf("Op��o 3 foi escolhida");
        break;
}
}
}


