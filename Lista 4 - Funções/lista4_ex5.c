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

    printf("Digite a opção de cálculo:\n[ a ] Média Aritmética\n[ p ] Média Ponderada\n[ h ] Média harmônica\nR: ");
    scanf(" %c", &opcao);

    f = medias(nota1, nota2, opcao);
    printf("A média calculada é: %.2f", f);

    return 0;
}
