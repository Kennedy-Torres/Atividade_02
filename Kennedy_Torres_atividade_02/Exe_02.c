#include <stdio.h>

int main(){

    float valor1, valor2;

    printf("Digite um valor qualquer:\n");
    scanf("%f",&valor1);

    printf("Agora digite um segundo valor qualquer:\n");
    scanf("%f",&valor2);

    if(valor1 > valor2){

        printf("O maior valor digitado eh: %.3f",valor1);
    }
    if(valor2 > valor1){

        printf("O maior valor digitado eh: %.3f",valor2);
    }

    else if( valor1 == valor2){
        printf("Numeros iguais.");
    }


    return 0;
}