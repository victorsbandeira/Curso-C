#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

setlocale(LC_ALL,"");

float a, b, c;

printf("\ndigite o valor do lado do triangulo: ");
scanf("%f %f %f", &a,&b,&c);
if (a==b && b==c){
    printf("\no triangulo eh equilatero");
}else{
printf("\no triangulo nao eh equilatero\n");
}


    }



