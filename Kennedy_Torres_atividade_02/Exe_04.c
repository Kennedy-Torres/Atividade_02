#include <stdio.h>

int main(){

    float salario, prestacao;

    printf("Informe o seu salario:\n");
    scanf("%f",&salario);

    printf("Informe o valor da prestacao do emprestimo:\n");
    scanf("%f",&prestacao);

    if(prestacao > (0.2*salario) ){
        printf("Emprestimo nao concedido");
    }
    else{
        printf("Emprestimo concedido");
    }

    return 0;
}