#include <stdio.h>

int main(){

    int valor1=0;

    printf("Digite um numero inteiro qualquer:\n");
    scanf("%d",&valor1);

    if(valor1%2 == 0){

        printf("O numero %d eh par.",valor1);
    }
    else{
        printf("O numero %d eh impar.",valor1);
    }


    return 0;
}