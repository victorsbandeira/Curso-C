#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


void main(){

setlocale(LC_ALL,"");
int a=10;

while(a<=20){

    printf("\n%d", a);
    a=a+2;

}

a=10;
do{
printf("\n%d",a);
a=a+2;
}
       while(a<=20);



          for(a=10; a<=20; a=a+2){

    printf("\n%d", a);
          }


}

