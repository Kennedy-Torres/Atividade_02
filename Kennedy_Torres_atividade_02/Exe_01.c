#include <stdio.h>

int main(){

    float valor1, valor2;

    printf("Informe um valor qualquer:\n");
    scanf("%f",&valor1);

    printf("Agora informe um segundo valor qualquer e diferente do anterior:\n");
    scanf("%f",&valor2);

    if(valor1 > valor2){
        printf("O maior valor digitado eh: %.3f", valor1);
    }
    else{
        printf("O maior valor digitado eh: %.3f",valor2);
    }

    return 0;
}