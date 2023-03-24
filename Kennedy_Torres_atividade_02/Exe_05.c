#include <stdio.h>
#include <math.h>

int main(){

float valor;

printf("Digite um numero qualquer:\n");
scanf("%f",&valor);

if( valor>0){

    printf("O numero %.3f possui:\n",valor);
    printf("O quadrado de seu numero: %.3f\n",valor*valor);
    printf("A raiz quadrada de seu numero: %.3f",pow(valor,0.5) ); // ou sqrt(valor)
}


    return 0;
}