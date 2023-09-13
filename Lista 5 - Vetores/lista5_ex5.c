#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_CTYPE, "Portuguese");
    int n, i, count = 0;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);
    int vetor[n];
    printf("Digite -1 para encerrar o preenchimento do vetor!\n");
    for(i=0;i<n;i++){
        printf("Insira um número inteiro para a posição %d: ", i);
        scanf("%d", &vetor[i]);
        if(vetor[i] == -1){
            break;
        }
        if(vetor[i] >= 10 && vetor[i] <= 50){
            count++;
        }
    }
    printf("%d números entre 10 e 50 foram digitados!", count);
    return 0;
}
