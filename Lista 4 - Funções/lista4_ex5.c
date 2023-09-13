#include <stdio.h>
#include <locale.h>

float medias(float nota1, float nota2, char opcao) {
    float media;

    if (opcao == 'a') {
        media = (nota1 + nota2) / 2;
    }
    else if (opcao == 'p') {
        media = (3 * nota1 + 2 * nota2) / 5;
    }
    else if (opcao == 'h') {
        media = 2 / ((1 / nota1) + (1 / nota2));
    }

    return media;
}

int main(){
    setlocale(LC_CTYPE, "Portuguese");
    float nota1, nota2, f;
    char opcao;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite a op��o de c�lculo:\n[ a ] M�dia Aritm�tica\n[ p ] M�dia Ponderada\n[ h ] M�dia harm�nica\nR: ");
    scanf(" %c", &opcao);

    f = medias(nota1, nota2, opcao);
    printf("A m�dia calculada �: %.2f", f);

    return 0;
}
