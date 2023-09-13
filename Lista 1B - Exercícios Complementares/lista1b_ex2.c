# include <stdio.h>
# include <locale.h>

int main(){

    setlocale(LC_CTYPE, "Portuguese");
    float base, altura, area;

    printf("Digite a base: ");
    scanf("%f", &base);

    printf("Digite a altura: ");
    scanf("%f", &altura);

    area = (base * altura)/2;

    printf("A área desse triângulo vale: %.1f", area);
    return 0;
}
