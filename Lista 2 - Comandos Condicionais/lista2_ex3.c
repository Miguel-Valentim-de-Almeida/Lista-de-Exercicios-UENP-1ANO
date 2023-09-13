#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_CTYPE, "Portuguese");
    float numero1, numero2, numero3, media;
    int contador;

    printf("Digite o 1° número positivo: ");
    scanf("%f", &numero1);

    printf("Digite o 2° número positivo: ");
    scanf("%f", &numero2);

    printf("Digite o 3° número positivo: ");
    scanf("%f", &numero3);

    media = (numero1 + numero2 + numero3) / 3;

    if(numero1 > media){
        contador+=1;
    }
    if(numero2 > media){
        contador+=1;
    }
    if(numero3 > media){
        contador+=1;
    }
    if(contador > 1 || contador == 0){
        printf("%d números estão acima da média", contador);
    }
    else{
        printf("%d número está acima da média", contador);
    }
    return 0;
}
