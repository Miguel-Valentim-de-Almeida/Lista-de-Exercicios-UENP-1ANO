# include <stdio.h>
# include <locale.h>

int main(){

    setlocale(LC_CTYPE, "Portuguese");
    int A, B, C, D, calculo;

    printf("Digite um valor inteiro para A: ");
    scanf("%d", &A);

    printf("Digite um valor inteiro para B: ");
    scanf("%d", &B);

    printf("Digite um valor inteiro para C: ");
    scanf("%d", &C);

    printf("Digite um valor inteiro para D: ");
    scanf("%d", &D);

    calculo = (A*B) - (C*D);

    printf("A diferença do produto de A e B pelo produto de C e D é igual a %d", calculo);
    return 0;
}
