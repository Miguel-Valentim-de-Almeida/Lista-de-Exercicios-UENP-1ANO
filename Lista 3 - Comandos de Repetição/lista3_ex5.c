#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_CTYPE, "Portuguese");
    int quantidadeNumeros, i, numero;
    float somador = 0, media;

    printf("Quantos n�meros inteiros voc� quer digitar? ");
    scanf("%d", &quantidadeNumeros);

    for(i=1;i<=quantidadeNumeros;i++){
        printf("Digite o %d� n�mero inteiro: ", i);
        scanf("%d", &numero);
        somador = somador + numero;
    }
    media = somador/quantidadeNumeros;
    printf("M�dia de todos os n�meros digitados: %.2f", (media));
    return 0;
}
