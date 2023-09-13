#include <stdio.h>
#include <locale.h>
#include <math.h>

float calcularRaizes(float a, float b, float c) {
    float x1, x2;
    float delta = b * b - 4 * a * c;

    if (delta >= 0) {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("Raizes:\n");
        printf("x1: %.2f\n", x1);
        printf("x2: %.2f\n", x2);
    }
    else {
        printf("A equação não possui raízes reais!");
    }
}

int main() {
    setlocale(LC_CTYPE,"Portuguese");
    float a, b, c, f;

    printf("Digite os coeficientes da equação de segundo grau (ax² + bx + c):\n");
    printf("Coeficiente a: ");
    scanf("%f", &a);
    printf("Coeficiente b: ");
    scanf("%f", &b);
    printf("Coeficiente c: ");
    scanf("%f", &c);

    f = calcularRaizes(a, b, c);

    return 0;
}
