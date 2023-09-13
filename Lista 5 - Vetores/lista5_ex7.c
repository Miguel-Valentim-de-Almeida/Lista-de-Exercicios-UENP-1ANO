#include <stdio.h>
#include <locale.h>

int maior(int vet[], int tamanho){
    int maior = -9999999999;
    for(int i=0;i<tamanho;i++){
        if(vet[i] > maior){
            maior = vet[i];
        }
    }
    return maior;
}

int main(){
    setlocale(LC_CTYPE, "Portuguese");
    int n, i, count = 0, f;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);
    int vetor[n];
    for(i=0;i<n;i++){
        printf("Insira um número inteiro para a posição %d: ", i);
        scanf("%d", &vetor[i]);
    }
    f = maior(vetor, n);
    printf("Maior: %d", f);
    return 0;
}
