#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_CTYPE, "Portuguese");
    int vetor[50], par[50], impar[50], pares = 0, impares = 0;
    for(int i=0; i<50;i++){
        printf("Insira um n�mero inteiro para a posi��o %d: ", i);
        scanf("%d", &vetor[i]);
        fflush(stdin);
        if(vetor[i] % 2 == 0){
            par[pares] = vetor[i];
            pares++;
        }
        else{
            impar[impares] = vetor[i];
            impares++;
        }
    }
    printf("N�meros pares:\n");
    for(int i=0;i<pares;i++){
        printf("%d ", par[i]);
    }
    printf("\nN�meros �mpares:\n");
    for(int i=0;i<impares;i++){
        printf("%d ", impar[i]);
    }
    return 0;
}
