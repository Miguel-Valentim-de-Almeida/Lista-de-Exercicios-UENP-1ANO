# include <stdio.h>
# include <math.h>
# include <locale.h>

int main(){
    setlocale(LC_CTYPE, "Portuguese");
    float A, B, C, formA, formB, formC, formD;

    printf("Digite o valor de A: ");
    scanf("%f", &A);

    printf("Digite o valor de B: ");
    scanf("%f", &B);

    printf("Digite o valor de C: ");
    scanf("%f", &C);

    formA = (A * B)/C;
    formB = pow(A,2) + B + 5 * C;
    formC = (A * B * C) + B + C/3 * 5 - 1;
    formD = pow((A * B * C), 3)/2;

    printf("F�rmula A: %.1f\n", formA);
    printf("F�rmula B: %.1f\n", formB);
    printf("F�rmula C: %.1f\n", formC);
    printf("F�rmula D: %.1f\n", formD);
    return 0;
}
