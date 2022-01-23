#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


void main(){

setlocale(LC_ALL,"");

int i;

for(i=1; i<=20; i++){

    printf("\n%d", i);
}

for(i=0; i<=10; i++){

    printf("\n9 X %d = %d", i, 9*i);
}

for(i=-10; i>-21; i--){

    printf("\n%d", i);
}


}
