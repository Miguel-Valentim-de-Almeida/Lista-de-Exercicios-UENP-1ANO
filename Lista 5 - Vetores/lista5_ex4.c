#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_CTYPE, "Portuguese");
    int vet[21], i, posicao[21];
    for(i=0;i<21;i++){
        printf("Insira um n�mero inteiro para a posi��o %d: ", i);
        scanf("%d", &vet[i]);
    }
    printf("Posi��es do vetor que o %d se encontra:\n", vet[20]);
    for(i=0;i<21;i++){
        if(vet[20] == vet[i]){
            printf("%d ", i);
        }
    }
    return 0;
}
