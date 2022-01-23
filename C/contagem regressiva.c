#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


void main(){

setlocale(LC_ALL,"");
int a=10;

while(a>=0){

    printf("\n%d", a);
    a--;

}
a=10;
do{
printf("\n%d",a);
a--;
}
       while(a>=0);



          for(a=10; a>=0; a--){

    printf("\n%d", a);
          }


}
