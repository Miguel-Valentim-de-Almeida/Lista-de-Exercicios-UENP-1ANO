#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_CTYPE, "Portuguese");
    int numero1, numero2, numero3;

    printf("Digite o 1� n�mero inteiro: ");
    scanf("%d", &numero1);

    printf("Digite o 2� n�mero inteiro: ");
    scanf("%d", &numero2);

    printf("Digite o 3� n�mero inteiro: ");
    scanf("%d", &numero3);

    printf("Voc� digitou os n�mero: %d %d %d\n", numero1, numero2, numero3);

    if(numero1 < numero2 && numero1 < numero3){
        printf("%d � o menor", numero1);
    }
    else if(numero2 < numero1 && numero2 < numero3){
        printf("%d � o menor", numero2);
    }
    else{
        printf("%d � o menor", numero3);
    }
    return 0;

}
