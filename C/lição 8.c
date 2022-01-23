#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


void main(){

setlocale(LC_ALL,"");

int a = 1, b = 10;

while(a<=10){
printf("\n%d", a);

a= a+1;

}
/*while(b>=1){
printf("\n%d", b);

b= b-1;*/


a=1;

do{
        printf("\n%d", a);
a++;

}while(a<=10);



}



