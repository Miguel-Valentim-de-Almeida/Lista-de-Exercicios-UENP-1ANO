#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_CTYPE, "Portuguese");
    float lado1, lado2, lado3;

    printf("Digite o comprimento do lado 1 (n�mero real maior que zero): ");
    scanf("%f", &lado1);

    printf("Digite o comprimento do lado 2 (n�mero real maior que zero): ");
    scanf("%f", &lado2);

    printf("Digite o comprimento do lado 3 (n�mero real maior que zero): ");
    scanf("%f", &lado3);

    if(lado1 == lado2 && lado2 == lado3){
        printf("Tri�ngulo Equil�tero");
    }
    else if(lado1 == lado2 || lado2 == lado3  || lado3 == lado1){
        printf("Tri�ngulo Is�sceles");
    }
    else{
        printf("Tri�ngulo Escaleno");
    }
    return 0;
}
