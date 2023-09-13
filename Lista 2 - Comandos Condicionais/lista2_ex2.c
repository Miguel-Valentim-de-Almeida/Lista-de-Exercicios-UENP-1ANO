#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_CTYPE, "Portuguese");
    int numero1, numero2, numero3;

    printf("Digite o 1° número inteiro: ");
    scanf("%d", &numero1);

    printf("Digite o 2° número inteiro: ");
    scanf("%d", &numero2);

    printf("Digite o 3° número inteiro: ");
    scanf("%d", &numero3);

    printf("Você digitou os número: %d %d %d\n", numero1, numero2, numero3);

    if(numero1 < numero2 && numero1 < numero3){
        printf("%d é o menor", numero1);
    }
    else if(numero2 < numero1 && numero2 < numero3){
        printf("%d é o menor", numero2);
    }
    else{
        printf("%d é o menor", numero3);
    }
    return 0;

}
