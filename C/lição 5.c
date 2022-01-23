#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

setlocale(LC_ALL,"");

float n1, n2, n3,resultado;

printf("digite as tres notas:");
scanf("%f %f %f", &n1, &n2, &n3);
resultado = ((n1+n2+n3)/3);
printf("A nota do aluno foi: %.2f",resultado);

if (resultado >= 7){
    printf("\n O aluno foi aprovado");
    }else{
    printf("\n O aluno foi reprovado");
    }

}

