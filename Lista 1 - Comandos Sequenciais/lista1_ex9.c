# include <stdio.h>
int main()
{
    float diariaNormal, diariaDesconto, lucroDesconto, lucroSemDesconto;
    
    printf("Informe o valor normal da diária: R$ ");
    scanf("%f", &diariaNormal);
    diariaDesconto = diariaNormal * 0.7;
    printf("Valor da diária com desconto de 30 por cento: R$ %.2f \n", diariaDesconto);
    //70% de 45 quartos são 31,5 quartos, como eu não sei se devo considerar um quarto fracionado, decidi arredondar
    lucroDesconto = diariaDesconto * 32;
    printf("Total arrecadado com ocupação de 70 por cento e diária com desconto: R$ %.2f \n", lucroDesconto);
    //Mesma coisa aqui, 35% de 45 quartos são 15,75 quartos, então decidi arredondar
    lucroSemDesconto = diariaNormal * 16;
    printf("Total arrecadado com ocupação de 35 por cento e diária normal: R$ %.2f", lucroSemDesconto);
    
    return 0;
}

