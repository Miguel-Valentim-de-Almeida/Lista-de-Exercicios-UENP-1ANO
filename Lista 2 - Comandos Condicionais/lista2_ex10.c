#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_CTYPE, "Portuguese");
    int interfaceGrafica, inteligenciaArtificial, encapsulamento, indentacao, structs;

    printf("Digite 1 se o seu trabalho possui tal requisito, sen�o, digite 0\n");

    printf("INTERFACE GR�FICA: ");
    scanf("%d", &interfaceGrafica);

    printf("INTELIG�NCIA ARTIFICIAL: ");
    scanf("%d", &inteligenciaArtificial);

    printf("ENCAPSULAMENTO: ");
    scanf("%d", &encapsulamento);

    printf("INDENTA��O: ");
    scanf("%d", &indentacao);

    printf("USO DE STRUCTS: ");
    scanf("%d", &structs);

    if((interfaceGrafica == 1 || inteligenciaArtificial) == 1 && encapsulamento == 1 && indentacao == 1 && structs == 1){
        printf("O trabalho possui todos os requisitos, ou seja, ser� avaliado!");
    }
    else{
        printf("O trabalho n�o possui os requisito! Nota 0");
    }
    return 0;
}
