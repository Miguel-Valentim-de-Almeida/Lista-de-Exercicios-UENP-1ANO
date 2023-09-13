#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_CTYPE, "Portuguese");
    float saldoMedio;

    printf("Digite o seu saldo médio: R$ ");
    scanf("%f", &saldoMedio);

    if(saldoMedio > 400){
        printf("Valor do crédito especial: R$ %.2f", saldoMedio * 0.3);
    }
    if(saldoMedio > 300 && saldoMedio <= 400){
        printf("Valor do crédito especial: R$ %.2f", saldoMedio * 0.25);
    }
    if(saldoMedio > 200 && saldoMedio <= 300){
        printf("Valor do crédito especial: R$ %.2f", saldoMedio * 0.2);
    }
    if(saldoMedio <= 200){
        printf("Valor do crédito especial: R$ %.2f", saldoMedio * 0.1);
    }
    return 0;
}
