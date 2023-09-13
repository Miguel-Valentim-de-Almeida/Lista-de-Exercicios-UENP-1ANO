#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_CTYPE, "Portuguese");
    float lado1, lado2, lado3;

    printf("Digite o comprimento do lado 1 (número real maior que zero): ");
    scanf("%f", &lado1);

    printf("Digite o comprimento do lado 2 (número real maior que zero): ");
    scanf("%f", &lado2);

    printf("Digite o comprimento do lado 3 (número real maior que zero): ");
    scanf("%f", &lado3);

    if(lado1 == lado2 && lado2 == lado3){
        printf("Triângulo Equilátero");
    }
    else if(lado1 == lado2 || lado2 == lado3  || lado3 == lado1){
        printf("Triângulo Isósceles");
    }
    else{
        printf("Triângulo Escaleno");
    }
    return 0;
}
