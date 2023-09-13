#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_CTYPE, "Portuguese");
    int quantidadeNumeros, i, numero;
    float somador = 0, media;

    printf("Quantos números inteiros você quer digitar? ");
    scanf("%d", &quantidadeNumeros);

    for(i=1;i<=quantidadeNumeros;i++){
        printf("Digite o %d° número inteiro: ", i);
        scanf("%d", &numero);
        somador = somador + numero;
    }
    media = somador/quantidadeNumeros;
    printf("Média de todos os números digitados: %.2f", (media));
    return 0;
}
