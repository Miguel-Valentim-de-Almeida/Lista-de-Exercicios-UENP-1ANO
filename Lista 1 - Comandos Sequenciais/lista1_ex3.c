# include <stdio.h>
int main()
{
    float preço, dolar, euro;
    float conversaoDolar, conversaoEuro;
    
    printf("Digite o valor do produto: R$");
    scanf("%f", &preço);
    printf("1 dólar são quantos reais? R$");
    scanf("%f", &dolar);
    printf("1 euro são quantos reais? R$");
    scanf("%f", &euro);
    
    conversaoDolar = preço / dolar;
    conversaoEuro = preço / euro;
    
    printf("R$%.2f = US$%.2f = %.2f €", preço, conversaoDolar, conversaoEuro);
    return 0;
}

