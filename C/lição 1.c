#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

setlocale(LC_ALL,"");
float nota1, nota2;

printf("digite a nota 1:");
scanf("%f", &nota1);
printf("digite a nota 2:");
scanf("%f", &nota2);
printf("a media da nota do aluno é = %f",(nota1+nota2)/2);




}
