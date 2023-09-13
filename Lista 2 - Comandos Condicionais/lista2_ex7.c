#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_CTYPE, "Portuguese");
    int codigo;
    float salario;

    printf("Digite o seu sal�rio atual: R$ ");
    scanf("%f", &salario);

    printf("Digite o c�digo do seu cargo:\n[ 1 ] Vendedor(a)\n[ 2 ] Auxiliar de escrit�rio\n[ 3 ] Auxiliar de enfermagem\n[ 4 ] Bibliotec�rio(a)\n");
    scanf("%d", &codigo);

    switch(codigo){
    case 1:
        printf("Valor do reajuste de 10 por cento: R$ %.2f\nSal�rio atualizado: R$ %.2f", salario * 0.1, salario * 1.1);
        break;
    case 2:
        printf("Valor do reajuste de 7 por cento: R$ %.2f\nSal�rio atualizado: R$ %.2f", salario * 0.07, salario * 1.07);
        break;
    case 3:
        printf("Valor do reajuste de 12 por cento: R$ %.2f\nSal�rio atualizado: R$ %.2f", salario * 0.12, salario * 1.12);
        break;
    case 4:
        printf("Valor do reajuste de 11 por cento: R$ %.2f\nSal�rio atualizado: R$ %.2f", salario * 0.11, salario * 1.11);
        break;
    default:
        printf("Cargo Inv�lido!");
        break;
    }
    return 0;
}
