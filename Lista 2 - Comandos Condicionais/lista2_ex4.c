#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
    setlocale(LC_CTYPE, "Portuguese");
    float a, b, c, delta, x1, x2;

    printf("Digite o valor do coeficiente a: ");
    scanf("%f", &a);

    printf("Digite o valor do coeficiente b: ");
    scanf("%f", &b);

    printf("Digite o valor do coeficiente c: ");
    scanf("%f", &c);

    if(a == 0){
        printf("Não é uma equação de segundo grau, pois, a = 0");
    }
    else{
        delta = pow(b,2) - 4 * a * c;

        if(delta<0){
            printf("Não existem raízes reais, pois, Delta < 0");
        }
        else{

            x1 = (-b + sqrt(delta));

            x2 = (-b - sqrt(delta));

            printf("x1 = %.1f \n", x1/(2*a));
            printf("x2 = %.1f \n", x2/(2*a));
        }
    }
    return 0;
}

