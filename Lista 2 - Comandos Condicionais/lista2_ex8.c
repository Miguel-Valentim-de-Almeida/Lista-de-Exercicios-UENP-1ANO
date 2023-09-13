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

    printf("Escolha a opera��o:\n[ 1 ] M�dia aritm�tica entre x e y\n[ 2 ] Diferen�a do maior pelo menor n�mero\n[ 3 ] Produto entre x e y\n[ 4 ] Divis�o entre x e y\n");
    scanf("%d", &codigo);

    switch(codigo){
    case 1:
        printf("M�dia arim�tica: %.2f", (x + y) / 2);
        break;
    case 2:
        if(x > y){
            printf("O maior n�mero � %.1f, o menor � %.1f, e a diferen�a entre eles � de: %.2f", x, y,  x - y);
            break;
        }
        else{
            printf("O maior n�mero � %.1f, o menor � %.1f, e a diferen�a entre eles � de: %.2f", y, x,  y - x);
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
            printf("Divis�o Inv�lida, pois, y = 0");
            break;
        }
    default:
        printf("Erro! Opera��o Inv�lida!");
        break;
    }
    return 0;
}
