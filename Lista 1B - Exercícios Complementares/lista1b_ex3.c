# include <stdio.h>
# include <locale.h>
# include <math.h>

int main(){

    setlocale(LC_CTYPE, "Portuguese");
    float massa, altura, imc;

    printf("Digite a sua massa em kg: ");
    scanf("%f", &massa);

    printf("Digite a sua altura em metros: ");
    scanf("%f", &altura);

    imc = massa/pow(altura,2);

    printf("Sua altura � %.2fm, sua massa � %.1fkg, logo seu IMC � de, aproximadamente, %.2f", altura, massa, imc);
    return 0;
}
