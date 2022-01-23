#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string>
#include <iostream>

using namespace std;

int main(){

setlocale(LC_ALL,"");

int matriz[2][2];
int i, j, k, l;


//for(m=0, m<2,m++){
  //  for(n=0, n<2,n++){


//cout << "Digite os valores para:";
//cin >>  matriz [0][0] >>  matriz [0][1] >>  matriz [1][0] >>  matriz [1][1];


/*
cout << "Digite os valores para[0][0]:";
cin >>  matriz [0][0];
cout << "Digite os valores para[0][1]:";
cin >>  matriz [0][1];
cout << "Digite os valores para[0][1]:";
cin >>  matriz [1][0];
cout << "Digite os valores para[0][1]:";
cin >>  matriz [1][1];
*/


for(i = 0; i < 2; i++){
    for(j = 0; j < 2; j++){
        cout << "Digite os valores para ["<< i <<"]["<< j<<"]: ";
        cin >>  matriz [i][j];
}

}

cout << "\n " << matriz [0][0] << " " << matriz [0][1];
cout << "\n " << matriz [1][0] << " " << matriz [1][1];

k = matriz [0][0];
l = matriz [0][1];
matriz [0][0] = matriz [1][0];
matriz [0][1] = matriz [1][1];

cout << "\n\n " << k << " " << l;
cout << "\n " << matriz [1][0] << " " << matriz [1][1] << "\n";



system ("pause");
}
