#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_CTYPE, "Portuguese");
    char nome[50];
    float valor;
    printf("Insira o nome da mercadoria: ");
    fgets(nome, 49, stdin);
    setbuf(stdin, NULL);
    printf("Insira o valor da mercadoria: R$ ");
    scanf("%f", &valor);
    float valor_a_vista = valor*0.9;
    printf("Nome da mercadoria: %s", nome);
    printf("Valor total: R$ %.2f\n", valor);
    printf("Valor do desconto: R$ %.2f\n", valor * 0.1);
    printf("Valor à vista: R$ %.2f", valor_a_vista);
    return 0;
}
