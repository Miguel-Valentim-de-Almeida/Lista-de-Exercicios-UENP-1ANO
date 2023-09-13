#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_CTYPE, "Portuguese");
    float x, y;
    int codigo;

    printf("Digite o valor de x: ");
    scanf("%f", &x);

    printf("Digite o valor de y: ");
    scanf("%f", &y);

    printf("Escolha a operação:\n[ 1 ] Média aritmética entre x e y\n[ 2 ] Diferença do maior pelo menor número\n[ 3 ] Produto entre x e y\n[ 4 ] Divisão entre x e y\n");
    scanf("%d", &codigo);

    switch(codigo){
    case 1:
        printf("Média arimética: %.2f", (x + y) / 2);
        break;
    case 2:
        if(x > y){
            printf("O maior número é %.1f, o menor é %.1f, e a diferença entre eles é de: %.2f", x, y,  x - y);
            break;
        }
        else{
            printf("O maior número é %.1f, o menor é %.1f, e a diferença entre eles é de: %.2f", y, x,  y - x);
            break;
        }
    case 3:
        printf("%.1f x %.1f = %.2f", x, y, x * y);
        break;
    case 4:
        if(y != 0){
            printf("%.1f / %.1f = %.2f", x, y, x/y);
            break;
        }
        else{
            printf("Divisão Inválida, pois, y = 0");
            break;
        }
    default:
        printf("Erro! Operação Inválida!");
        break;
    }
    return 0;
}
