#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_CTYPE, "Portuguese");
    int codigo, quantidade;
    float valorTotal;

    printf("Digite o código do produto que você está comprando: ");
    scanf("%d", &codigo);

    printf("Qual a quantidade comprada? ");
    scanf("%d", &quantidade);

    switch(codigo){
    case 1:
        valorTotal = 5.30 * quantidade;
        if(valorTotal >= 15 || valorTotal >= 40){
            printf("Valor total com desconto de 15 por cento: R$ %.2f", valorTotal * 0.85);
            break;
        }
        else{
            printf("Valor total: R$ %.2f", valorTotal);
            break;
        }
    case 2:
        valorTotal = 6 * quantidade;
        if(valorTotal >= 15 || valorTotal >= 40){
            printf("Valor total com desconto de 15 por cento: R$ %.2f", valorTotal * 0.85);
            break;
        }
        else{
            printf("Valor total: R$ %.2f", valorTotal);
            break;
        }
    case 3:
        valorTotal = 3.2 * quantidade;
        if(valorTotal >= 15 || valorTotal >= 40){
            printf("Valor total com desconto de 15 por cento: R$ %.2f", valorTotal * 0.85);
            break;
        }
        else{
            printf("Valor total: R$ %.2f", valorTotal);
            break;
        }
    case 4:
        valorTotal = 2.5 * quantidade;
        if(valorTotal >= 15 || valorTotal >= 40){
            printf("Valor total com desconto de 15 por cento: R$ %.2f", valorTotal * 0.85);
            break;
        }
        else{
            printf("Valor total: R$ %.2f", valorTotal);
            break;
        }
    default:
        printf("Produto Inválido!");
        break;
    }
    return 0;
}
