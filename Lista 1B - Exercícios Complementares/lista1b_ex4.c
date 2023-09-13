# include <stdio.h>
# include <locale.h>

int main(){

    setlocale(LC_CTYPE, "Portuguese");
    float gasto, total;

    printf("Digite o valor gasto: R$  ");
    scanf("%f", &gasto);

    total = gasto * 1.1;

    printf("O total a pagar, considerando os 10 por cento do garçom, é de R$ %.2f", total);
    return 0;
}
