#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_CTYPE, "Portuguese");
    float numero1, numero2, numero3, media;
    int contador;

    printf("Digite o 1� n�mero positivo: ");
    scanf("%f", &numero1);

    printf("Digite o 2� n�mero positivo: ");
    scanf("%f", &numero2);

    printf("Digite o 3� n�mero positivo: ");
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
        printf("%d n�meros est�o acima da m�dia", contador);
    }
    else{
        printf("%d n�mero est� acima da m�dia", contador);
    }
    return 0;
}
