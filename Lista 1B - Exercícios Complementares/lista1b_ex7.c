# include <stdio.h>
# include <locale.h>

int main(){

    setlocale(LC_CTYPE, "Portuguese");
    int dias;
    float km, valorTotal, desconto;

    printf("Por quantos dias voc� alugou o carro (1 a 30 dias)? ");
    scanf("%d", &dias);

    printf("Quantos quil�metros voc� rodou (1 a 1000 km)? ");
    scanf("%f", &km);

    valorTotal = (dias * 30) + (km * 0.01) ;
    desconto = valorTotal * 0.9;

    printf("O valor total a ser pago � de R$ %.2f", desconto);
    return 0;
}
