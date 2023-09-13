#include <stdio.h>
#include <locale.h>

void multiplos7(int vet[], int tamanho){
    printf("Números do vetor que são múltiplos de 7:\n");
    for(int i=0;i<tamanho;i++){
        if(vet[i] % 7 == 0){
            printf("%d ", vet[i]);
        }
    }
}

int main(){
    setlocale(LC_CTYPE, "Portuguese");
    int n, i, count = 0;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);
    int vetor[n];
    for(i=0;i<n;i++){
        printf("Insira um número inteiro para a posição %d: ", i);
        scanf("%d", &vetor[i]);
    }
    multiplos7(vetor, n);
    return 0;
}
